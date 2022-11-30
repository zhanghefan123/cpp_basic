//
// Created by huang aoan on 2022/11/30.
//

#include "DeepAndShallowCopy.h"

// 进行深拷贝
void testDeepCopy()
{
    Marine marine1("ak47",1900);
    Marine marine2(marine1);
    marine1.printInfo();
    marine2.printInfo();
}