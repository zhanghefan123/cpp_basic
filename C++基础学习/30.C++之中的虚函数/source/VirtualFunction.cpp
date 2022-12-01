//
// Created by huang aoan on 2022/12/1.
//
#include "VirtualFunction.h"
void DoBusiness(Animal& animal)
{
    animal.speak();
}
void testVirtualFunction()
{
    Dog dog;
    DoBusiness(dog);
}
