//
// Created by huang aoan on 2022/12/1.
//

#ifndef C___LEARNING_VIRTUALEXTEND_H
#define C___LEARNING_VIRTUALEXTEND_H
#include <iostream>
class BigBase{
public:
    BigBase(){ mParam = 0; }
    void func(){ std::cout << "BigBase::func" << std::endl; }
public:
    int mParam;
};

class Base1 : public BigBase{};
class Base2 : public BigBase{};
class Derived : public Base1, public Base2{};

class BigBaseVirtual{
public:
    BigBaseVirtual(){ mParam = 0; }
    void func(){ std::cout << "BigBaseVirtual::func" << std::endl; }
public:
    int mParam;
};

class Base1Virtual : public virtual BigBaseVirtual{};
class Base2Virtual : public virtual BigBaseVirtual{};

class DerivedVirtual : public Base1Virtual, public Base2Virtual{};

void testVirtualExtend();
#endif //C___LEARNING_VIRTUALEXTEND_H
