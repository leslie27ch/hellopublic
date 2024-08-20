
import rclpy
from rclpy.node import Node
def main():
    rclpy.init()
    node = Node('python_node')
    node.get_logger().info("hello node ,你好 节点 2024")
    node.get_logger().info("hello node ,你好 节点 2024") 
    rclpy.spin(node)
    rclpy.shutdown()

