//
// Created by huang aoan on 2022/11/30.
//
#include "IndexOperator.h"

void indexOperatorTest()
{
    MarineForce marineForce(10);
    marineForce[1].setCapacity(100);
    marineForce[1].setName("zhf");
    // 进行所有的遍历和输出
    for (int i = 0; i < marineForce.getSize(); i++)
    {
        marineForce[i].printInfo();
    }
}