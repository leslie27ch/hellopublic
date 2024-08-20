#include "iostream"
#include "../include/qiu_1cpp_pkg/qiu.hpp"
#include "rclcpp/rclcpp.hpp"
int main(int argc,char **argv)
{
    std::cout<<"参数数量="<<argc<<std::endl;
    std::cout<<"程序名字="<<argv[0]<<std::endl;
    rclcpp::init(argc,argv);
    auto node = std::make_shared<rclcpp::Node>("cpp_node");
    RCLCPP_INFO(node->get_logger(),"你好c++节点！");
    Qiu qiu(11);
    qiu.fun();
    rclcpp::spin(node);
    rclcpp::shutdown();
 
    return 0;
}