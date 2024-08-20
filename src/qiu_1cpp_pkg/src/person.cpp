#include"rclcpp/rclcpp.hpp"
#include<string>
#include<iostream>
#include "../include/qiu_1cpp_pkg/person.hpp"
using namespace std;


int main(int argc,char**argv)
{

    person p("kunkun",11);
    p.havefun("math");
    return 0;
}