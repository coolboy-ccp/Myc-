//
//  MyTeacher.h
//  Myc++
//
//  Created by liqunfei on 15/8/3.
//  Copyright (c) 2015年 chuchengpeng. All rights reserved.
//

#ifndef __Myc____MyTeacher__
#define __Myc____MyTeacher__

#include <stdio.h>
#include <iostream>
#include <string>
#endif /* defined(__Myc____MyTeacher__) */
using namespace std;

class MyTeacher
{
public:
    ~MyTeacher(){cout << "release" << endl;}
    MyTeacher(string name = "Jime",int age = 12,int m = 100);
    MyTeacher(const MyTeacher &teacher,int m = 121);
    void setName(string _name);
    string getName();
    void setAge(int _age);
    int getAge();
    int getMax();
private:
    string m_strName;
    int m_iAge;
    const int m_iMax;
};