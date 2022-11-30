//
// Created by huang aoan on 2022/11/28.
//
#include <iostream>
#include "ScopeOperator.h"
using namespace std;
int a = 10;
void testHidden()
{
    // 局部变量
    int a = 20;
    // 全局变量被隐藏
    cout << "局部变量a = " << a << endl;
}
void testGlobal()
{
    // 全局变量
    cout << "全局变量a = " << ::a << endl;
}