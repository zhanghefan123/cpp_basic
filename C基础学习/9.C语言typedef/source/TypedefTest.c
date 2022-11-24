//
// Created by huang aoan on 2022/11/24.
//
#include "../header/TypedefTest.h"
#include <stdio.h>
void TestTypedef()
{
    TYPE t;
    t.a = 254;
    t.b = 10;
    t.c = 'c';

    PTYPE p = &t;
    printf("%u, %d, %c\n", p->a, p->b, p->c);
}