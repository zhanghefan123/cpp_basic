//
// Created by huang aoan on 2022/11/30.
//
#include "Parentheses.h"
#include <iostream>
using namespace std;
void testTank()
{
    Tank tank(100);
    // 这里会进行隐式转换
    int capacity = tank;
    cout << capacity << endl;
    // 这里会进行显示转换
    int capacity2 = (int) tank;
    cout << capacity2 << endl;
    // 还可以进行相加的操作
    int capacity3 = tank + tank;
    cout << capacity3 << endl;
}