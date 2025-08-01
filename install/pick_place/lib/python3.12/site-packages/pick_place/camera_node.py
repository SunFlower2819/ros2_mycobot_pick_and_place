#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2

class CameraNode(Node):
    def __init__(self):
        super().__init__('camera_node')

        # OpenCv와 ROS 메시지 간 변환 도구
        self.bridge = CvBridge()

        # camer/image_raw 토픽에 sensor_msgs.msg.Image 메시지를 큐사이즈 10으로 전달
        self.pub = self.create_publisher(Image, 'camera/image_raw', 10)

        # jetcobot 열기
        self.cap = cv2.VideoCapture('/dev/jetcocam0')

        # 3초마다 timer_callback() 자동으로 실행
        self.create_timer(3.0, self.timer_callback)  # 3초 주기

    def timer_callback(self):
        # 카메라로부터 한 프레임을 읽어오기
        ret, frame = self.cap.read()

        # 실패하면 경고 로그 출력 후 종료
        if not ret:
            self.get_logger().warn('카메라 프레임 읽기 실패')
            return
        
        # /camera/image_raw를 publish
        msg = self.bridge.cv2_to_imgmsg(frame, 'bgr8')
        self.pub.publish(msg)

def main():
    rclpy.init()
    node = CameraNode()
    rclpy.spin(node)
    node.cap.release()
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()