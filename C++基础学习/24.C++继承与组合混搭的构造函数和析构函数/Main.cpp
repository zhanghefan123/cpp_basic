//
// Created by huang aoan on 2022/12/1.
//
#include "ExtendAndComposition.h"
int main()
{
    // 这里面是A是基类，B是A的派生类，派生类B之中有一个对象，C是B的派生类
    // 所以这里的构造函数的调用顺序是：A->D->B->C
    // 这里的西沟函数的调用顺序是：C->B->D->A
    testExtendAndComposition();
    // A类构造函数!
    // D类构造函数!
    // B类构造函数!
    // C类构造函数!
    // C类析构函数!
    // B类析构函数!
    // D类析构函数!
    // A类析构函数!
}