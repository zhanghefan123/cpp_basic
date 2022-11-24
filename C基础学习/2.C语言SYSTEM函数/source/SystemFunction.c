//
// Created by huang aoan on 2022/11/11.
//

#include "../headers/SystemFunction.h"
#include <stdlib.h>
#include <stdio.h>

void testSystemFunction() {
    /**
     * system函数
     * 可以执行linux里面的相应的命令
     * */
    int result = system("ls");
    printf("result = %d", result);
}
