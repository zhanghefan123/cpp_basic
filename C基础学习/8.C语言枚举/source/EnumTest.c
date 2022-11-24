//
// Created by huang aoan on 2022/11/24.
//

#include "../header/EnumTest.h"
#include <stdio.h>
void useEnum()
{
    enum Color color = Red;
    switch (color) {
        // 按照颜色进行选择
        case Red:
            printf("Red");
            break;
        case Green:
            printf("Green");
            break;
        case Blue:
            printf("Blue");
            break;
        default:
            printf("Unknown");
            break;
    }
}