//
//  Teacher.cpp
//  Myc++
//
//  Created by liqunfei on 15/8/3.
//  Copyright (c) 2015年 chuchengpeng. All rights reserved.
//

#include "Teacher.h"

void Teacher::setGender(string _gender)
{
    m_strGender = _gender;
}

string Teacher::getGender()
{
    return m_strGender;
}

void Teacher::setAge(int _age)
{
    m_iAge = _age;
}

int Teacher:: getAge()
{
    return m_iAge;
}

void Teacher::teach()
{
    cout << "class is begining" << endl;
}