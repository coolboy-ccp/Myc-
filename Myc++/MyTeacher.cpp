//
//  MyTeacher.cpp
//  Myc++
//
//  Created by liqunfei on 15/8/3.
//  Copyright (c) 2015年 chuchengpeng. All rights reserved.
//

#include "MyTeacher.h"



MyTeacher::MyTeacher(string name,int age,int m):m_strName(name),m_iAge(age),m_iMax(m)
{
    cout << "fefef" << endl;
}

int MyTeacher::getMax()
{
    return m_iMax;
}

MyTeacher::MyTeacher(const MyTeacher &teacher,int m):m_iMax(m)
{
    
}

void MyTeacher::setName(string _name)
{
    m_strName = _name;
}
string MyTeacher::getName()
{
    return m_strName;
}
void MyTeacher::setAge(int _age)
{
    m_iAge = _age;
}
int MyTeacher::getAge()
{
    return m_iAge;
}