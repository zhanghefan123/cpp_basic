//
// Created by huang aoan on 2022/11/28.
//
#include "ThreeTest.h"
#include <iostream>
using namespace std;
void zhf::threeTest() {
    int a = 10;
    int b = 20;
    (a > b ? a : b) = 100;
    std::cout << "a: " << a << " b: " << b << std::endl;
}