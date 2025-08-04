"""
로봇팔에 부착된 카메라를 불러서 이미지를 찍는 모듈
"""
# import cv2

# def get_frame(device='/dev/jetcocam0'):
#     cap = cv2.VideoCapture(device)
#     if not cap.isOpened():
#         raise RuntimeError(f"카메라를 열 수 없습니다: {device}")

#     ret, frame = cap.read()
#     cap.release()

#     if not ret:
#         raise RuntimeError("프레임을 읽지 못했습니다.")
    
#     return frame

import cv2

class CameraManager:
    def __init__(self, device='/dev/jetcocam0'):
        self.cap = cv2.VideoCapture(device)
        if not self.cap.isOpened():
            raise RuntimeError(f"카메라를 열 수 없습니다: {device}")

    def get_frame(self):
        ret, frame = self.cap.read()
        if not ret:
            raise RuntimeError("프레임을 읽지 못했습니다.")
        # return frame
        return ret, frame


    def destroy_node(self):
        self.camera.release()  # 카메라 해제
        super().destroy_node()


