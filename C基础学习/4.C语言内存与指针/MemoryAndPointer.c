//
// Created by huang aoan on 2022/11/24.
//

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// 1、内存

// 存储器：计算机的组成中，用来存储程序和数据，辅助CPU进行运算处理的重要部分。
// 内存：内部存贮器，暂存程序/数据——掉电丢失 SRAM、DRAM、DDR、DDR2、DDR3
// 外存：外部存储器，长时间保存程序/数据—掉电不丢ROM、ERRROM、FLASH（NAND、NOR）、硬盘、光盘。

// 2、物理存储器和存储地址空间

// 物理存储器：实际存在的具体存储器芯片。
   // - 主板上的内存条
   // - 显示卡上的显示RAM芯片
   // - 各种适配卡上的RAM和ROM芯片

// 存储地址空间:
    // - 逻辑地址空间：程序员看到的地址空间，是一个虚拟的地址空间，是程序员编写程序时使用的地址空间。
    // - 物理地址空间：实际存在的存储器芯片的地址空间，是程序员在编写程序时看不到的地址空间。
    // - 内存地址就是将内存抽象为一个很大的一维的字符数组
    //   - 编码就是对内存的每一个字节分配一个32或者64位的编号
    //   - 这个内存编号称之为内存地址

// 指针的基础知识

int global1 = 5;
int global2 = 10;


void testGlobalPointer()
{
    // 全局变量存储在数据区，所以地址是从低到高的
    int *p1 = &global1;
    int *p2 = &global2;
    printf("p1 = %p, p2 = %p\n", p1, p2);
    // p1 = 0x102e24000, p2 = 0x102e24004
}

void testPointerBasic()
{
    // 局部变量是存储在栈上的，所以地址是从大到小变化的
    int a = 0;
    char b = 100;
    printf("%p, %p\n", &a, &b); //打印a, b的地址
    // 0x16b5b72ac, 0x16b5b72ab

    //int *代表是一种数据类型，int*指针类型，p才是变量名
    //定义了一个指针类型的变量，可以指向一个int类型变量的地址
    int *p;
    p = &a;//将a的地址赋值给变量p，p也是一个变量，值是一个内存地址编号
    printf("%d\n", *p);//p指向了a的地址，*p就是a的值

    char *p1 = &b;
    printf("%c\n", *p1);//*p1指向了b的地址，*p1就是b的值
}

void testPointerHeap()
{
    // 堆上的内存是动态分配的，所以地址是从低到高的
    int *p1 = (int *)malloc(sizeof(int));
    int *p2 = (int *)malloc(sizeof(int));
    printf("p1 = %p, p2 = %p\n", p1, p2);
    // p1 = 0x600001a64020, p2 = 0x600001a64030
}

void testPointerSize()
{
    // 使用sizeof测量指针的大小，得到的总是4，8
    // 在32位平台，所有的指针都是32位字节
    // 在64位平台，所有的指针都是64位字节
    int *p;
    char *p1;
    double *p2;
    printf("%lu, %lu, %lu\n", sizeof(p), sizeof(p1), sizeof(p2));
}

// void*指针类型，可以指向任意类型的指针
void testVoid()
{
    void* p = NULL;
    int a = 10;
    p = (void*)&a;
    printf("%d\n", *(int*)p);
}

// const 放前面与const放后面
void testConst()
{
    int a = 100;
    int b = 200;

    //指向常量的指针
    //修饰*，指针指向内存区域不能修改，指针指向可以变
    const int * p1 = &a; //等价于int const *p1 = &a;
    //*p1 = 111; //err
    p1 = &b; //ok

    //指针常量
    //修饰p1，指针指向不能变，指针指向的内存可以修改
    int * const p2 = &a;
    //p2 = &b; //err
    *p2 = 222; //ok
}

// 指针的加减运算
void plusAndMinusPointer()
{
    int a;
    int *p = &a;
    printf("%p\n", p);
    p += 2;//移动了2个int
    printf("%p\n", p);
    // 0x16b49f2ac
    // 0x16b49f2b4

    char b = 0;
    char *p1 = &b;
    printf("%p\n", p1);
    p1 += 2;//移动了2个char
    printf("%p\n", p1);
    // 0x16b49f29f
    // 0x16b49f2a1
}

// 多级指针
void testMultiPointer()
{
    int a = 10;
    int *p = &a;
    int **p1 = &p;
    int ***p2 = &p1;
    printf("%d\n", ***p2);
}

// 指针作为函数参数进行传递
void swap(int *x, int *y)
{
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main()
{
    testGlobalPointer();
    testPointerBasic();
    testPointerHeap();
    testPointerSize();
    testVoid();
    testConst();
    plusAndMinusPointer();
    testMultiPointer();
    int a = 10;
    int b = 20;
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
