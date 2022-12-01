//
// Created by huang aoan on 2022/12/1.
//

#ifndef C___LEARNING_SAMENAME_H
#define C___LEARNING_SAMENAME_H
#include <iostream>
class Base{
public:
    Base(int param):mParam(param){
    }
    // 两个类拥有同名的成员
    int mParam;
    // 两个类拥有同名的函数
    void func(){
        std::cout << "Base::func()" << std::endl;
    }
    void func(int a)
    {
        std::cout << "Base::func(int a)" << std::endl;
    }
    static int getNum(int a,int b,int c)
    {
        return a + b + c;
    }
};

class Derived : public Base{
public:
    Derived(int param):Base(10),mParam(param){
    }
    // 两个类拥有同名的成员
    int mParam;
    // 两个类拥有同名的函数
    void func(){
        std::cout << "Derived::func()" << std::endl;
    }
    static int getNum(int a,int b)
    {
        return a + b;
    }
};
void testSameName();
#endif //C___LEARNING_SAMENAME_H
