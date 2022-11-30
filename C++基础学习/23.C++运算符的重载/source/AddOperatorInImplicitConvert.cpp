//
// Created by huang aoan on 2022/11/30.
//
#include "AddOperatorInImplicitConvert.h"

void testAddOperatorInImplicitConvert()
{
    Complex c1(1, 2);
    Complex c2(3, 4);
    Complex c3 = c1 + 3.5;
    // 如果没有全局的+运算符重载，那么这里会报错
    // 因为不会发生隐式类型的转换
    // Complex c4 = 3.5 + c2;
    std::cout << c3;
}

// 进行友元的定义
Complex operator + (const Complex &a, const Complex &b)
{
    Complex temp(a.real + b.real, a.imag + b.imag);
    return temp;
}

// 进行左移运算符的定义
ostream& operator << (ostream &os, const Complex &c)
{
    os << c.real << "+" << c.imag << "i" << std::endl;
    return os;
}