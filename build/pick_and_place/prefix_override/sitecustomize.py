import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/jetcobot/venv/mycobot/dev/moon_ws/ros2_ws/install/pick_and_place'
