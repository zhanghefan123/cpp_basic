//
// Created by huang aoan on 2022/11/30.
#include <iostream>
#include "ClassStaticVariable.h"
// 这个定义最好不要在头文件之中，否则可能出现重复定义的问题
// 在c++的类之中静态变量在类中声明，在类外进行定义
int cpp_basic::Person::count = 0;
void testStaticVariable()
{
    cpp_basic::Person person1;
    cpp_basic::Person person2;
    cpp_basic::Person person3;
    std::cout << cpp_basic::Person::getCount() << std::endl;
}