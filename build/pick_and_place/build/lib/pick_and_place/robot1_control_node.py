import rclpy
from rclpy.node import Node
import time
import numpy as np
from pymycobot.mycobot280 import MyCobot280
from pymycobot.genre import Angle, Coord

from pick_and_place.base_coordinate_transform import transform_target_pose_camera_to_base
from pick_and_place.image_capture import CameraManager  # CameraManager 클래스 가져오기
from pick_and_place.image_detection import detect_target  # detect() 내부에서 _detect_april_tag 호출
from custom_messeage.srv import RobotArmRequest  # srv 경로에 따라 조정 필요

## Note: pick, place 각각 따로 모듈화하기(분리시켜 놓기)

class Robot2ControlNode(Node):
    def __init__(self):
        super().__init__('robot1_control_node')
        self.srv = self.create_service(
            RobotArmRequest,
            'arm1_service',
            self.arm1_control_callback
        )
        self.get_logger().info("arm1_control 서비스 서버가 시작되었습니다.")
        
        self.mc = MyCobot280('/dev/ttyJETCOBOT', 1000000)
        self.mc.thread_lock = True
        print("로봇이 연결되었습니다.")

        # 카메라 초기화 (예외 처리 추가)
        try:
            # self.camera = CameraManager()  # 여러 디바이스 자동 시도

            self.camera = CameraManager(enable_streaming=True, flask_port=5000)  # 스트리밍 활성화
            self.get_logger().info("카메라가 성공적으로 초기화되었습니다.")
        except RuntimeError as e:
            self.get_logger().error(f"카메라 초기화 실패: {e}")
            self.camera = None  # 카메라 없이도 동작하도록
 
    def arm1_control_callback(self, request, response):
        pinky_id = request.amr_id
        action = request.action.lower()
        shelf_num = request.shelf_num

        self.get_logger().info(f'[서비스 요청] action: {action}, shelf_num: {shelf_num}, pinky_num: {pinky_id}')

        if action == 'shelf_to_buffer':
            success, msg = self.handle_shelf_to_buffer(pinky_id, shelf_num)
        elif action == 'buffer_to_shelf':
            success, msg = self.handle_buffer_to_shelf(pinky_id)
        else:
            success = False, f"지원하지 않는 action: {action}"

        ## Note: OCR 인식 후 얻은 데이터 저장
        response.robot_id = 2
        response.amr_id = pinky_id
        response.action = msg
        response.model = 'None'
        response.size = -1
        response.color = 'None'
        response.success = success
        return response


##=========================================================================================
    '''
    RobotArm1이 shelf에서 buffer로 물건을 옮기는 함수
    '''
    def handle_shelf_to_buffer(self, pinky_id, shelf_num):
        # TODO: 실제 로봇 로직 작성
        print(f"{shelf_num}번 선반을 위한 초기자세로 이동..")
        if shelf_num == 1 or shelf_num == 2:
            self.mc.send_angles([-19.07, 57.04, -13.18, -36.82, 16.52, 47.37], 20) # 1,2번 선반 보는 초기 자세
        elif shelf_num == 3 or shelf_num == 4:
            self.mc.send_angles([-10.28, 84.11, -119.09, 13.53, 9.22, 46.66], 20)  # 3,4번 선반 보는 초기 자세
        elif shelf_num == 5 or shelf_num == 6:
            self.mc.send_angles([-10.28, 84.11, -119.09, 13.53, 9.22, 46.66],20)   # 4,5번 선반 보는 초기 자세
        else:
            print("정의되지 않은 선반 번호")

        print("그리퍼를 완전히 엽니다.")
        self.mc.set_gripper_value(100, 50)

        # 프레임 가져오고, 프레임에서 에이프릴테그 감지
        time.sleep(5)
        frame = self.camera.get_frame()
        camera_coords, rvec_deg, tag_id = detect_target(frame, target_id=pinky_id) # 타겟 id = pinky_id

        if camera_coords is not None and rvec_deg is not None:
            print("\n=== April Tag 좌표 정보 ===")
            print(f"카메라 기준 좌표: {camera_coords}")
            print(f"회전 벡터 (도): {rvec_deg}")

            try:
                print("\n=== Base 좌표계로 변환 중... ===")
                base_coords = transform_target_pose_camera_to_base(
                    camera_coords, rvec_deg, self.mc.get_radians()
                )

                base_coords[3], base_coords[4], base_coords[5] = -96, 46.39, -91.65
                print(f"베이스 좌표 [x, y, z, roll, pitch, yaw]: {base_coords}")

                approach_coords = base_coords.copy()
                # 선반의 offset값 설정
                approach_coords[0] -= 80
                approach_coords[1] -= 0
                approach_coords[2] -= 8

                print(f"1차 Joint 접근 목표: {approach_coords}")
                self.mc.send_coords(approach_coords, 20, 0)
                print("접근 위치로 이동 중...")
                
                print("로봇 이동(2단계) 명령을 전송했습니다.")
                print("이동 완료까지 대기 중...")
                time.sleep(3)

                current_coords = self.mc.get_coords()

                # IK의 해를 못찾아서 로봇이 이동하지 못할 경우 예외 처리
                # |가야할 좌표값 - 이동 후 좌표값| 
                ## Note: 되는데 안된다고 판단할 위험 있음 (오차 범위 재설정 필요)
                if np.linalg.norm(np.array(approach_coords) - np.array(current_coords)) > 30.0:  # mm 단위 기준
                    print("이동할 수 없는 좌표값입니다.")
                    return False, '갈 수 없는 베이스 좌표로 인한 실패'

                print(f"이동 후 현재 좌표: {current_coords}")

                # 집기
                print("그리퍼를 완전히 닫습니다.")
                self.mc.set_gripper_value(0, 50)
                time.sleep(2)

                #경유지 설정( 타겟 충돌 방지)
                self.mc.send_angles([-19.07, 57.04, -13.18, -36.82, 16.52, 47.37], 20)
                time.sleep(2)

                # # 1차 경유지 이동
                # buffer_name = "None"  # ← 여기를 "buffer1", "buffer2", "buffer3"로 바꿀 수 있음

                # print("경유지로 이동 중...")
                # mc.send_angles([-12.39, 29.7, 25.22, -68.73, 11.33, 47.72], 20)

                # # 버퍼별 2차 경유지 이동
                # if buffer_name in BUFFER_APPROACH_ANGLES:
                #     print("버퍼 상단으로 1차 이동 중...")
                #     mc.send_angles(BUFFER_APPROACH_ANGLES[buffer_name], 20)
                #     time.sleep(2)

                # # ✅ 도착지 이름으로 이동
                # move_to_buffer(mc, buffer_name)
                # time.sleep(3)

                # # 놓기
                # print("그리퍼를 완전히 엽니다.")
                # mc.set_gripper_value(100, 50)
                # time.sleep(1)

                # # 버퍼별 1차 후퇴 앵글로 이동
                # if buffer_name in BUFFER_APPROACH_ANGLES:
                #     print("버퍼 상단으로 1차 이동 중...")
                #     mc.send_angles(BUFFER_APPROACH_ANGLES[buffer_name], 20)
                #     time.sleep(1)

                # 복귀
                print("초기 위치로 복귀합니다.")
                self.mc.send_angles([-19.07, 57.04, -13.18, -36.82, 16.52, 47.37], 20)

            except Exception as e:
                print(f"좌표 변환 또는 이동 중 오류 발생: {e}")
                return False, "좌표 변환 또는 로봇 이동 중 오류 발생"
        else:
            print("April Tag 좌표를 가져올 수 없습니다.")
            return False, '에이프릴 테그 인식 실패' # "선반에서 버퍼로 이동 실패"

        self.get_logger().info(f"선반 → 버퍼{pinky_id}")
        return True, 'arm1_shelf_to_buffer' # "선반에서 버퍼로 이동 완료"
    
##=========================================================================================

    '''
    RobotArm1이 buffer에서 shelf로 물건을 옮기는 함수
    '''
    def handle_buffer_to_shelf(self, pinky_id):
        # TODO: 실제 로봇 로직 작성
        self.get_logger().info(f"버퍼 → 선반")
        return True, 'arm1_buffer_to_shelf' # "버퍼에서 선반으로 이동 완료"
##=========================================================================================


def destroy_node(self):
    """노드 종료 시 리소스 정리"""
    if self.camera:
        self.camera.release()  # 카메라 해제
    super().destroy_node()

def main(args=None):
    rclpy.init(args=args)
    node = Robot2ControlNode()
    try:
        rclpy.spin(node)
    finally:
        node.camera.release()  # 안전하게 종료 시 카메라 해제
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()