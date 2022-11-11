//
// Created by huang aoan on 2022/11/11.
//

#include "../headers/SystemFunction.h"
// 这里因为c++倾向于使用c打头的头文件，所以这里有下划线
#include "stdlib.h"
#include "stdio.h"
namespace basic_env {
    void testSystemFunction() {
        // system函数
        // 用于执行一个命令行命令
        // 返回值为0表示执行成功
        // 返回值为-1表示执行失败
        // 返回值为其他值表示执行命令的返回值
        int result = system("ls");
        printf("result = %d", result);
    }
}