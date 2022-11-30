//
// Created by huang aoan on 2022/11/29.
//
#include "InlineFunction.h"
#include <iostream>
// 与定义宏函数没有作用域的概念
#define ADD(a, b) a + b
void zhf::testMacroAndInline(){
    int a = 10;
    int b = 20;
    int c = ADD(a, b) * 10; // 变成的结果为 10 + 20 * 10 = 210
    int d = zhf::add(a, b) * 10; // 变成的结果为 (10 + 20) * 10 = 300
    std::cout << c << std::endl;
    std::cout << d << std::endl;
}