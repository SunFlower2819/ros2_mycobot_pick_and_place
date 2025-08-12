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
        pinky_id = request.robot_id
        action = request.action.lower()
        shelf_num = request.shelf_num

        self.get_logger().info(f'[서비스 요청] action: {action}, shelf_num: {shelf_num}, pinky_num: {pinky_id}')

        if action == 'shelf_to_buffer':
            success, msg = self.handle_buffer_to_pinky(pinky_id)
        elif action == 'buffer_to_shelf':
            success, msg = self.handle_pinky_to_buffer(pinky_id)
        else:
            success = False, f"지원하지 않는 action: {action}"

        ## Note: OCR 인식 후 얻은 데이터 저장
        response.action = msg
        response.shelf_num = 3
        response.model = 'None'
        response.size = -1
        response.color = 'None'
        response.success = success
        return response


##=========================================================================================
    '''
    RobotArm1이 shelf에서 buffer로 물건을 옮기는 함수
    '''
    def handle_shelf_to_buffer(self, pinky_id):
        # TODO: 실제 로봇 로직 작성
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