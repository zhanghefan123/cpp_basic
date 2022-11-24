//
// Created by huang aoan on 2022/11/24.
//
#include "stdio.h"
int main(int argc, char *argv[])
{
    // 打印参数
    // 我们可以在edit configuration 之中进行参数的设置
    for (int i = 0; i < argc; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    return 0;
}