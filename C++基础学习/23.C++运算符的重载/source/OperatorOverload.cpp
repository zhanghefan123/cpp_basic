//
// Created by huang aoan on 2022/11/30.
//
#include "OperatorOverload.h"

void testAddOperator()
{
    Maker m1(1, 2);
    Maker m2(3, 4);
    Maker m3 = m1 + m2;
    std::cout << m3;
}

// 在外部进行乘法运算符的重载
Maker operator * (const Maker &m1, const Maker &m2)
{
    Maker temp(m1.id * m2.id, m1.age * m2.age);
    return temp;
}


void testTimeOperator()
{
    Maker m1(1, 2);
    Maker m2(3, 4);
    Maker m3 = m1 * m2;
    std::cout << m3;
}

void testMinusOperator()
{
    Maker m1(1, 2);
    Maker m2(3, 4);
    Maker m3 = m1 - m2;
    std::cout << m3;
}

void testOperatorRight()
{
    Maker m1;
    Maker m2;
    // 将我们输入的值放到m1和m2的属性之中
    std::cin >> m1 >> m2;
    std::cout << m1 << m2;
}