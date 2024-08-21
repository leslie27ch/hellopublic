#include"rclcpp/rclcpp.hpp"
#include<string>
#include<iostream>
#include "../include/qiu_1cpp_pkg/person.hpp"
using namespace std;
class writer:public person,public rclcpp::Node
{
    public:
        writer(const string& nodename,const string& name,int age):person(name,age),rclcpp::Node(nodename){}

        void write(const string& book,const string& game)
        {
            havefun(game);
          
            RCLCPP_INFO(this->get_logger(),"lalalaladadada我写了一本书: %s ,我喜欢玩：%s\n",book.c_str(),game.c_str());

        }
};

int main(int argc,char**argv)
{
   

    rclcpp::init(argc,argv);
    auto writenode = std::make_shared<writer>("cpp_writer_ros_node","kunkun",111);
    //    RCLCPP_INFO(node->get_logger(),"我写了一本书: ",book,"我喜欢玩：",game);
    writenode->write("kunkun adventure","math");
    rclcpp::spin(writenode);
    rclcpp::shutdown();
    return 0;
}