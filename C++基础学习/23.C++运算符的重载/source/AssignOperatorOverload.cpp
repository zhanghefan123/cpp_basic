//
// Created by huang aoan on 2022/11/30.
//
#include "AssignOperatorOverload.h"

void testAssignOperatorOverload()
{
    PostGraduate p1(10,"zhf");
    PostGraduate p2 = p1;
    cout << p1 << p2;
}