//
// Created by huang aoan on 2022/12/1.
//

#ifndef C___LEARNING_MULTIEXTEND_H
#define C___LEARNING_MULTIEXTEND_H
#include <iostream>
class Base1{
public:
    void func1(){ std::cout << "Base1::func1" << std::endl; }
};
class Base2{
public:
    void func1(){ std::cout << "Base2::func1" << std::endl; }
    void func2(){ std::cout << "Base2::func2" << std::endl; }
};
//派生类继承Base1、Base2
class Derived : public Base1, public Base2{};
void testMultiExtend();
#endif //C___LEARNING_MULTIEXTEND_H
