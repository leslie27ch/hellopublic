import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/qiu/ros2024/kunkun_chapter2_ws/hellopublic/install/qiu_firt_node_pkg'
