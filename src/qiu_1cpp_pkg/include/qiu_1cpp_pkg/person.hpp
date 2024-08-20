#ifndef __PERSON__H
#define __PERSON__H

#include"rclcpp/rclcpp.hpp"
#include<string>
#include<iostream>
using namespace std;
class person
{
    public:
        person(const string& name,int age):m_name(name),m_age(age){}

        void havefun(const string& game)
        {
            cout<<"我是 "<<m_name<<"我喜欢 "<<game<<endl;
        }
    private:
        string  m_name;
        int m_age;

};
#endif