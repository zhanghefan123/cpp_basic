//
// Created by huang aoan on 2022/11/28.
//
#include <iostream>
#include "ConstTest.h"
using namespace std;
void cannotChangeValue(){
    const int a  =  20;
    int* p = (int*)&a;
    *p = 100;
    cout << a << endl;
}

void canChangeValue(){
    // volatile 禁止编译器优化，将变量替换为常量的行为
    volatile const int a = 20;
    int* p = (int*)&a;
    *p = 100;
    cout << a << endl;
};

void testLab()
{
    zhf::Lab lab(10,10);
    cout << (lab.getCount()) << endl;
    lab.printCount();

    // 常对象
    // 常对象只能调用const的成员函数
    // 常对象可访问 const 或非 const 数据成员，不能修改，除非成员用mutable修饰
    const zhf::Lab constLab(10,10);
    cout << (constLab.getCount()) << endl;
    // constLab.setCount(20); 这行代码无法进行调用会发生报错

}