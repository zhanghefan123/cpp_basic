//
// Created by huang aoan on 2022/11/29.
//
#include "CallConstructTiming.h"
#include <iostream>
void testScientist()
{
    Scientist scientist; // 调用无参数的构造的时候
    scientist.printInfo();
    // 初始化的时候：调用默认拷贝构造函数进行值拷贝
    Scientist newScientist(scientist);
    newScientist.printInfo();
    // 初始化的时候：调用默认拷贝构造函数进行值拷贝
    Scientist newScientist2 = scientist;
    // 进行赋值运算符的调用
    newScientist2 = scientist;
}