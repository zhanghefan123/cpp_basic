#include "../headers/MemoryOperation.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h> // memset 函数位于这个头文件之中
void memsetTest(){
    /**
     * 功能：将s的内存区域的前n个字节以参数c填入
     *  参数：
     *      s：需要操作内存s的首地址
     *      c：填充的字符，c虽然参数为int，但必须是unsigned char , 范围为0~255
     *      n：指定需要设置的大小
     *  返回值：s的首地址
     */
    int a[10];
    memset(a, 1, sizeof(a));
    for(int i = 0;i < sizeof(a)/sizeof(a[0]);i++)
    {
        printf("a[%d]的值 = %d",i,a[i]);
    }
}

void memcpyTest()
{
    /**
     * 功能：拷贝src所指的内存内容的前n个字节到dest所值的内存地址上。
     * 参数：
     *      dest：目的内存首地址
     *      src：源内存首地址，注意：dest和src所指的内存空间不可重叠，可能会导致程序报错
     *      n：需要拷贝的字节数
     *  返回值：dest的首地址
     */
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int b[10];
    memcpy(b,a,sizeof(a));
    for(int i = 0;i<sizeof(b)/sizeof(b[0]);i++)
    {
        printf("b[%d]的值 = %d",i,b[i]);
    }
}

void mallocTest()
{
    /**
     * 功能：在堆区分配n个字节的内存空间，返回指向该内存空间的指针
     * 参数：
     *      n：需要分配的字节数
     * 返回值：指向分配的内存空间的指针
     */
    int *p = (int *)malloc(sizeof(int));
    *p = 10;
    printf("*p = %d",*p);
    /**
     * 功能：释放指针p所指向的内存空间
     * 参数：需要释放的空间的首地址
     */
    free(p);
}