//
// Created by huang aoan on 2022/11/24.
//

#include "../header/UnionTest.h"
#include <stdio.h>
void UnionTestFunction()
{
    //定义共用体变量
    union Test tmp;

    //1、所有成员的首地址是一样的
    printf("%p, %p, %p\n", &(tmp.a), &(tmp.b), &(tmp.c));

    //2、共用体大小为最大成员类型的大小
    printf("%lu\n", sizeof(union Test));

    //3、一个成员赋值，会影响另外的成员
    //左边是高位，右边是低位
    //低位放低地址，高位放高地址
    tmp.b = 0x44332211;

    printf("%x\n", tmp.a); //11
    printf("%x\n", tmp.c); //2211

    tmp.a = 0x00;
    printf("short: %x\n", tmp.c); //2200
    printf("int: %x\n", tmp.b); //44332200
}