"""
로봇팔에 부착된 카메라를 불러서 이미지를 찍는 모듈
"""
import cv2

def get_frame(device='/dev/jetcocam0'):
    cap = cv2.VideoCapture(device)
    if not cap.isOpened():
        raise RuntimeError(f"카메라를 열 수 없습니다: {device}")

    ret, frame = cap.read()
    cap.release()

    if not ret:
        raise RuntimeError("프레임을 읽지 못했습니다.")
    
    return frame