#include "headers/MemoryManagement.h"
#include "stdio.h"
extern int global_static_var; // 无法访问静态全局变量，在使用的时候会发生错误
extern int global_var; // 不会发生错误，因为是全局变量
int main()
{
    staticVariableTest();
    staticVariableTest();
    tempVariableTest();
    testGlobalStaticVariable();
    // printf("global_static_var = %d\n", global_static_var); 这一行会发生报错
    printf("global_var = %d\n", global_var);
}