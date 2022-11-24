//
// Created by huang aoan on 2022/11/24.
//
#include <stdio.h>
#include "../headers/MemoryManagement.h"

// 静态全局变量：只能在本文件之中进行使用
static int global_static_var = 0;
int global_var = 0;


void tempVariableTest()
{
    /**
     * 临时局部变量
     */
    auto int b;
    printf("未初始化的局部变量 = %d\n", b);
}

void staticVariableTest()
{
    /**
     * 静态变量：只会在第一次调用的时候进行初始化
     */
    static int staticVariable = 0;
    staticVariable++;
    printf("staticVariable = %d\n", staticVariable);
}

void testGlobalStaticVariable()
{
    /**
     * 静态全局变量：只能在本文件之中进行使用
     * */
    global_static_var++;
    printf("global_static_var = %d\n", global_static_var);
}

