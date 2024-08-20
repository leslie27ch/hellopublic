#ifndef QIU_H
#define QIU_H
#include<iostream>
using namespace std;
class Qiu
{
    public:
        Qiu(int age):m_age(age){};
        void fun()
        {cout<<"this is qiu have fun! and m_age = "<<m_age<<endl;}
    private:
        int m_age;
};
#endif