//
//  FirstC++.cpp
//  Myc++
//
//  Created by liqunfei on 15/7/30.
//  Copyright (c) 2015年 chuchengpeng. All rights reserved.
//

#include "FirstC++.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
class tv{
    
};
typedef struct
{
    int x;
    int y;
}Coor;

void funchange(int &a,int &b){
    cout << "(old) a = " << a << ",d = " << b <<endl;
    int c;
    c = a;
    a = b;
    b = c;
    cout << "a = " << a << ",d = " << b <<endl;
}

void constl(){
    int x = 3;
    int b = 15;
    int const *p = &x;
    x = 5;
   
    p = &b;
    cout << "constx = " << x << ",constp" << *p << ",constq" << endl;
}

void constm(){
    int y = 3;
    int const &z = y;
    y = 15;
    cout << "y = " << y << ",z = " << z << endl;
}

void funmorenzhi(int a,int b = 5);
void funmorenzhi(int a,int b){
    cout << "a+b = " << a+b << endl;
}

inline void funneilian(int a,int b){
    if (a<b) {
        a = b;
        cout << "neilian max = " << a << endl;
    }
}

void funmorenzhi(){
    int *p = new int;
    if (NULL == p) {
        system("pause");
        return;
    }
    *p = 20;
    cout << *p << endl;
    delete p;
    p = NULL;
    int *q = new int[1000];
    q[0] = 10;
    q[1] = 20;
    cout << q[0] << q[1] << endl;
    delete []q;
    q = NULL;
    
}

int firstFun(void){
    funneilian(15, 25);
    funmorenzhi(220);
    funmorenzhi(20,15);
    constm();
    int a = 3;
    int &b = a;
    b = 10;
    Coor c1;
    Coor &c = c1;
    c.x = 10;
    c.y = 20;
    cout << "x = " << c.x << ",y = " << c.y << endl;
    int *p = &a;
    int *&q = p;
    *q = 20;
    cout << "a = \(a)"<< a << endl;
    a = 1;
    int d = 15;
    funchange(a,d);
    constl();
    return a;
}



