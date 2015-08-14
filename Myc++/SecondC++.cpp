//
//  SecondC++.cpp
//  Myc++
//
//  Created by liqunfei on 15/7/30.
//  Copyright (c) 2015年 chuchengpeng. All rights reserved.
//

#include "SecondC++.h"
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
class Coordinate
{
public:
    int x;
    int y;
    void printX()
    {
        cout << x << endl;
    }
    void printY()
    {
        cout << y << endl;
    }
};

class dog
{
public:
    char *name[30];
    int age;
    char *sex[10];
    
};

class Student_eg
{
public:
    void setName(string _name)
    {
        m_strName = _name;
    }
    string getName()
    {
        return m_strName;
    }
    void setGender(string _gender)
    {
        m_strGender = _gender;
    }
    string getGender()
    {
        return m_strGender;
    }
    int getScore()
    {
        return m_iScore;
    }
    void initScore()
    {
        m_iScore = 0;
    }
    void study(int _score)
    {
        m_iScore += _score;
    }
private:
    string m_strName;
    string m_strGender;
    int m_iScore;
};
