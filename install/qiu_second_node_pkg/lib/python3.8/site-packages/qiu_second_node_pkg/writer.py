from qiu_second_node_pkg.person import person
import rclpy
from rclpy.node import Node
class writer(person,Node):
    def __init__(self,nodename,style,name,age) -> None:
        super().__init__(self,name,age)
        super.__init__(self,nodename)
        self.style = style
    def write(self,bookname,game):

        super().get_logger().info(f"line1 the {self.style} style writer is writing a book {bookname}")
        super().get_logger().info(f"line2 the {self.style} style writer is writing a book {bookname}") 
        super().havefun(game)
def main():
    rclpy.init()
    wrnode = writer("rosnode","fiction","kunkun",11)
    wrnode.write("kunkun adventure","math")


    rclpy.spin(wrnode)
    rclpy.shutdown()