import rclpy
from rclpy.node import Node
import time
from pymycobot.mycobot280 import MyCobot280
from pymycobot.genre import Angle, Coord

from pick_and_place.base_coordinate_transform import transform_target_pose_camera_to_base
# from pick_and_place.image_capture import get_frame
from pick_and_place.image_capture import CameraManager  # ← 클래스 가져오기
from pick_and_place.image_detection import detect_target  # detect() 내부에서 _detect_april_tag 호출

from custom_messeage.srv import RobotArmRequest  # srv 경로에 따라 조정 필요


class Robot2ControlNode(Node):
    def __init__(self):
        super().__init__('robot2_control_node')
        self.srv = self.create_service(
            RobotArmRequest,
            'arm2_service',
            self.arm2_control_callback
        )
        self.get_logger().info("arm2_control 서비스 서버가 시작되었습니다.")
        
        self.mc = MyCobot280('/dev/ttyJETCOBOT', 1000000)
        self.mc.thread_lock = True
        print("로봇이 연결되었습니다.")

        # 카메라 초기화 (예외 처리 추가)
        try:
            self.camera = CameraManager()  # 여러 디바이스 자동 시도
            self.get_logger().info("카메라가 성공적으로 초기화되었습니다.")
        except RuntimeError as e:
            self.get_logger().error(f"카메라 초기화 실패: {e}")
            self.camera = None  # 카메라 없이도 동작하도록
 
    def arm2_control_callback(self, request, response):
        shelf_num = request.shelf_num
        action = request.action.lower()
        pinky_num = request.pinky_num
        shoe_info = request.shoe_info

        self.get_logger().info(f'[서비스 요청] action: {action}, shelf_num: {shelf_num}, pinky_num: {pinky_num}, shoe_info: {shoe_info}')

        if action == 'buffer_to_pinky':
            success = self.handle_buffer_to_pinky(pinky_num, shoe_info)
        elif action == 'pinky_to_buffer':
            success = self.handle_pinky_to_buffer(pinky_num, shoe_info)
        else:
            success = False, f"지원하지 않는 action: {action}"

        response.success = success
        # response.message = msg
        return response


    def handle_buffer_to_pinky(self, pinky_num, shoe_info):
        # TODO: 실제 로봇 로직 작성
        self.mc.send_angles([96.59, 1.31, -52.38, -36.82, -1.4, 58.97], 20)
        cur_joints_rad = self.mc.get_radians()
        print("라디안:", cur_joints_rad)

        time.sleep(5)

        # 프레임 가져오고, 프레임에서 에이프릴테그 감지
        # frame = self.camera.get_frame()
        frame = self.camera.get_frame() ###ham
        # self.get_logger().info(f'[이미지 데이터] : {ret}')

        camera_coords, rvec_deg = detect_target(frame)

        if camera_coords is not None and rvec_deg is not None:
            print("\n=== April Tag 좌표 정보 ===")
            print(f"카메라 기준 좌표: {camera_coords}")
            print(f"회전 벡터 (도): {rvec_deg}")

            print("\n=== Base 좌표계로 변환 중... ===")
            try:
                base_coords = transform_target_pose_camera_to_base(camera_coords, rvec_deg, cur_joints_rad)
                base_coords[3], base_coords[4], base_coords[5] = -177.0, 2.0, -52.0

                print(f"베이스 좌표 [x, y, z, roll, pitch, yaw]: {base_coords}")

                approach = base_coords.copy()
                approach[0] -= 10
                approach[1] += 0
                approach[2] += 65
                print(f"1차 Joint 접근 목표: {approach}")

                self.mc.send_coords(approach, 20, 1)
                print("로봇 이동(2단계) 명령을 전송했습니다.")
                print("이동 완료까지 대기 중...")
                time.sleep(3)

                current_coords = self.mc.get_coords()
                print(f"이동 후 현재 좌표: {current_coords}")

            except Exception as e:
                print(f"좌표 변환 또는 로봇 이동 중 오류 발생: {e}")

        else:
            print("April Tag 좌표를 가져올 수 없습니다.")
            return False # "버퍼에서 핑키로 이동 실패"

        time.sleep(3)
        print("그리퍼를 완전히 닫습니다.")
        self.mc.set_gripper_value(0, 50)
        time.sleep(1)

        # self.mc.send_angles([0, 0, 0, 0, 0, 40], 20) # colcon build --symlink-install

        self.get_logger().info(f"버퍼 → 핑키: {pinky_num}, 신발: {shoe_info}")
        return True # "버퍼에서 핑키로 이동 완료"

    def handle_pinky_to_buffer(self, pinky_num, shoe_info):
        # TODO: 실제 로봇 로직 작성
        self.get_logger().info(f"핑키 → 버퍼: {pinky_num}, 신발: {shoe_info}")
        return True # "핑키에서 버퍼로 이동 완료"

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