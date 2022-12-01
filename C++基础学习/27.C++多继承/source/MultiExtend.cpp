//
// Created by huang aoan on 2022/12/1.
//
#include "MultiExtend.h"
void testMultiExtend()
{
    Derived derived;
    //func1是从Base1继承来的还是从Base2继承来的？
    //derived.func1();
    derived.func2();

    //解决歧义:显示指定调用那个基类的func1
    derived.Base1::func1();
    derived.Base2::func1();
}