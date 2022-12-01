//
// Created by huang aoan on 2022/12/1.
//

#ifndef C___LEARNING_VIRTUALINITIALIZATION_H
#define C___LEARNING_VIRTUALINITIALIZATION_H
#include <iostream>
class BigBase{
public:
    BigBase(int x){mParam = x;}
    void func(){std::cout << "BigBase::func" << std::endl;}
public:
    int mParam;
};
class Base1 : virtual public BigBase{
public:
    Base1() :BigBase(10){} //不调用BigBase构造
};
class Base2 : virtual public BigBase{
public:
    Base2() :BigBase(10){} //不调用BigBase构造
};

class Derived : public Base1, public Base2{
public:
    Derived() :BigBase(20){} //调用BigBase构造
};
void testVirtualInitialization();
#endif //C___LEARNING_VIRTUALINITIALIZATION_H
