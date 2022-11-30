//
// Created by huang aoan on 2022/11/29.
//
#include "OverLoad.h"

// 能够是重载函数的条件
/**
*   同一个作用域
    参数个数不同
    参数类型不同
    参数顺序不同
*/

#include <string>
#include <iostream>
using namespace std;
//1. 函数重载条件
namespace A{
    void MyFunc(){ cout << "无参数!" << endl; }
    void MyFunc(int a){ cout << "a: " << a << endl; }
    void MyFunc(string b){ cout << "b: " << b << endl; }
    void MyFunc(int a, string b){ cout << "a: " << a << " b:" << b << endl;}
    void MyFunc(string b, int a){cout << "a: " << a << " b:" << b << endl;}
}
//2.返回值不作为函数重载依据
namespace B{
    void MyFunc(string b, int a){}
    //int MyFunc(string b, int a){} //无法重载仅按返回值区分的函数
}

//3.函数重载的实现原理
// 编译器为了实现函数重载，也是默认为我们做了一些幕后的工作，
// 编译器用不同的参数类型来修饰不同的函数名，比如void func();
// 编译器可能会将函数名修饰成_func，当编译器碰到 void func(int x),
// 编译器可能将函数名修饰为func_int,当编译器碰到void func(int x,char c),
// 编译器可能会将函数名修饰为_func_int_char我这里使用”可能”这个字眼是
// 因为编译器如何修饰重载的函数名称并没有一个统一的标准，所以不同的编译器可能会产生不同的内部名。

// 以linux为例
// void func(){} 产生的函数名为 _Z4funcv v 代表void
// void func(int x){}  产生的函数名为 _Z4funci i 代表int
// void func(int x,char y){} 产生的函数名为  _Z4funcic i 代表int c 代表char

int main()
{
    // 测试命名空间A
    A::MyFunc();
    A::MyFunc(1);
    A::MyFunc("hello");
    A::MyFunc(1, "hello");
    A::MyFunc("hello", 1);

    // 测试命名空间B
    B::MyFunc("hello", 1);
}