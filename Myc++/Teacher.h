//
//  Teacher.h
//  Myc++
//
//  Created by liqunfei on 15/8/3.
//  Copyright (c) 2015年 chuchengpeng. All rights reserved.
//

#ifndef __Myc____Teacher__
#define __Myc____Teacher__

#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <iostream>
#endif /* defined(__Myc____Teacher__) */
using namespace std;
 class Teacher
{
public:
    Teacher(string name)
    {
        m_strName = name;
    }
    Teacher()
    {
        m_strName = "zhangsan";
    }
    void setName(string _name);
    string getName();
    void setGender(string _gender);
    string getGender();
    void setAge(int _age);
    int getAge();
    void teach();
private:
    string m_strName;
    string m_strGender;
    int m_iAge;
};

void Teacher::setName(string _name)
{
    m_strName = _name;
}

string Teacher::getName()
{
    return m_strName;
}

class Circle
{
public:
    Circle():m_dPi(3.14){}
private:
    const double m_dPi;
};
