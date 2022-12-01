//
// Created by huang aoan on 2022/12/1.
//
#include "SameName.h"
#include <iostream>
void testSameName()
{
    Base b(10);
    Derived d(20);
    // 如果我们默认使用mParam进行访问则只能够访问的是派生类中的mParam
    // 如果我们想要访问基类中的mParam则需要使用作用域进行访问
    std::cout << d.mParam << " " << d.Base::mParam << std::endl;

    // 同名的函数如果不是虚函数则会进行覆盖
    // 下面调用的是派生类之中的同名函数
    d.func();
    // d.func(1); 这行代码也会发生错误，因为派生类中的名字对基类中的进行了遮盖

    // 如果出现同名的静态成员函数
    // 下面调用基类的行为会发生报错
    // d.getNum(1,2,3);基类的进行了隐藏

    // 只能够调用派生类中的同名静态成员函数
    int result = d.getNum(1,2);
    std::cout << result << std::endl;
}