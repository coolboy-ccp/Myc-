//
//  main.cpp
//  Myc++
//
//  Created by liqunfei on 15/7/30.
//  Copyright (c) 2015年 chuchengpeng. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include "FirstC++.h"
#include "SecondC++.cpp"
#include <string>
#include "MyTeacher.h"
using namespace std;
namespace A {
    int x = 1;
    void fun()
    {
        std::cout << "A";
        
    }
}

namespace B {
    int x = 2;
    void fun()
    {
        std::cout << "B";
    }
}

namespace myNum
{
    bool isoushu(int a)
    {
        bool isFlag = false;
        if (a%2 == 0) {
            isFlag = true;
        }
        else{
            isFlag = false;
        }
        return isFlag;
    }
}

using namespace::B;
void firstc(void){
    std::cout << "Hello, World!\n";
    int x = 1024;
    int y(2048);
    y = x+y;
    cout<<"X+Y"<<endl;
    std::cout << "x+y="<<x+y;
    std::cout << "please input varial\n";
    std::cin >> x >> y;
    std::cout << "(new)x+y=" << x+y;
    x = 0;
    std::cout << "pelease input int:";
    std::cin >> x;
    std::cout << std::oct << x <<"\n";
    std::cout << std::dec << x;
    std::cout << std::hex << x;
    std::cout << "please input a bool\n";
    bool z = false;
    std::cin >> z;
    std::cout << std::boolalpha << z;
}
namespace companyA {
    int getMaxOrMin(int *arr,int count,bool isMax){
        int temp = arr[0];
        for (int i = 1; i < count; i++) {
            if (isMax) {
                if (temp < arr[i]) {
                    temp = arr[i];
                }
            }
            else{
                if (temp > arr[i]) {
                    temp = arr[i];
                }
            }
        }
        return temp;
    }
}


int main(int argc, const char * argv[]) {
//    int arr[4] = {3,5,1,7};
//    bool isMax = false;
//    cin >> isMax;
//    cout << companyA::getMaxOrMin(arr, 4, isMax) << endl;
//    system("pause");
//    std::cout << A::x << "\n";
//    A::fun();
//    fun();
//    int y = 1;
//    while (y) {
//        cout << "请输入一个整数" <<endl;
//        cin >> y;
//        if (y == 0) {
//            break;
//        }
//        cout << "请输入一个正整数" << endl;
//        int x = 0;
//        cin >> x;
//        if (myNum::isoushu(x)) {
//            cout << "这是一个偶数" << endl;
//        }
//        else{
//            cout << "这是一个奇数" << endl;
//        }
//    }
//    cout << firstFun() << endl;
    
    //Coordinate coor;
//    Coordinate coor;
//    coor.x = 10;
//    coor.y = 15;
//    coor.printX();
//    coor.printY();
//    
//    Coordinate *p = new Coordinate();
//    if (NULL == p) {
//        return 0;
//    }
//    p->x = 100;
//    p->y = 200;
//    p->printX();
//    p->printY();
//    delete p;
//    p = NULL;
//    string name = "zhangsan";
//    string name1("hahahhahhahah");
//    string name2 = name+name1;
//    string name3;
//    cout << "Please input your name:" << endl;
//    getline(cin, name3);
//    if (name3.empty()) {
//        cout << "input is null.." << endl;
//    }
//    else{
//    if (name3 == "imooc") {
//        cout << "you are a administrator" <<endl;
//    }
//    cout << "hello "+name3 << endl;
//    cout << "your name length is :" << name3.size() << endl;
//    cout << "your name first letter is:" << name3[0] << endl;
//    }
//    Student_eg stu;
//    stu.initScore();
//    stu.setName("zhangsan");
//    stu.setGender("female");
//    stu.study(5);
//    stu.study(3);
//    cout << stu.getName() << " " << stu.getGender() << " " << stu.getScore() << endl;
    MyTeacher t1;
    MyTeacher t2("Merry",17,150);
    MyTeacher t3 = t1;
    MyTeacher t4 (t1);
    cout << t1.getAge() << " " << t1.getName() << " " << t1.getMax() <<endl;
    cout << t2.getAge() << " " << t2.getName() <<" "<< t2.getMax() << endl;
    cout << t3.getMax() << endl;
    cout << t4.getMax() << endl;
    return 0;
}