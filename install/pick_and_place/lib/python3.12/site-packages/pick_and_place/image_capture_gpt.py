import cv2
import threading
import time

class CameraManager:
    def __init__(self, device='/dev/jetcocam0'):
        self.cap = cv2.VideoCapture(device)
        if not self.cap.isOpened():
            raise RuntimeError(f"카메라를 열 수 없습니다: {device}")

        self.latest_frame = None
        self.running = True
        self.lock = threading.Lock()
        self.thread = threading.Thread(target=self._update_frame, daemon=True)
        self.thread.start()

    def _update_frame(self):
        """카메라로부터 프레임을 계속 읽는 백그라운드 루프"""
        while self.running:
            ret, frame = self.cap.read()
            if ret:
                with self.lock:
                    self.latest_frame = frame.copy()
            time.sleep(0.03)  # 약 30FPS

    def get_frame(self):
        """가장 최근 프레임을 반환"""
        with self.lock:
            if self.latest_frame is None:
                raise RuntimeError("아직 프레임이 준비되지 않았습니다.")
            return self.latest_frame.copy()

    def release(self):
        self.running = False
        self.thread.join()
        self.cap.release()
