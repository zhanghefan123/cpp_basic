//
// Created by huang aoan on 2022/12/1.
//
#include "VirtualInitialization.h"

void testVirtualInitialization(){
    Derived derived;
    // 这三个变量的地址都是基类对象的地址
    std::cout << derived.Base1::mParam << " " << &derived.Base1::mParam << std::endl;
    std::cout << derived.Base1::mParam << " " << &derived.Base2::mParam << std::endl;
    std::cout << derived.mParam << " " << &derived.mParam << std::endl;
};