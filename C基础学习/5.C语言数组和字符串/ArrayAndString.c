//
// Created by huang aoan on 2022/11/23.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 创建一个结构体
struct Person{
    char* name;
    int age = 0;
};

// 一维结构体数组测试
void testFirstDimensionArray()
{
    // 创建一个结构体数组
    struct Person personArray[3];
    for(int i = 0;i < 3;i++)
    {
        personArray[i].name = (char*)malloc(sizeof(char) * 5);
        // 读取一行字符字符而不是一个单词，最多读取10-1个字符，最后一个字符是'\0'
        printf("请输入第%d个人的姓名：", i + 1);
        fgets(personArray[i].name,10,stdin);
        personArray[i].name[strlen(personArray[i].name) - 1] = '\0';
        fflush(stdin);
        printf("请您输入第%d个人的年龄：", i + 1);
        scanf("%d", &personArray[i].age);
        // 由于gets会接收到scanf完成输入后的回车，所以这里需要进行的是使用fflush(stdin)收掉回车
        fflush(stdin);
    }
    // 进行结果的输出
    for(int i = 0; i< 3;i++)
    {
        printf("第%d个人的姓名是：%s，年龄是：%d\n", i + 1, personArray[i].name, personArray[i].age);
    }
    // 进行缓冲区的释放
    for(auto & i : personArray)
    {
        free(i.name);
    }
}

// 一维指针数组的测试
void testPointerArray()
{
    char* nameArray[3]; // 三个元素，每个元素都是char*
    int index = 1;
    for(auto & i : nameArray)
    {
        i = (char*)malloc(sizeof(char) * 5);
        sprintf(i, "test-%d\n", index++);
    }
    // print nameArray
    for(auto & i : nameArray) {
        printf("%s", i);
    }
    // free memory
    for(auto & i : nameArray)
    {
        free(i);
    }
}

void testVariableLengthArray(){
    int length;
    printf("%s", "请输入数组的长度：");
    scanf("%d", &length);
    // 由于C语言不支持变长数组，所以这里需要使用malloc来进行动态内存的分配
    int* array = (int*)malloc(sizeof(int) * length);
    for(int i = 0;i < length;i++)
    {
        array[i] = i;
    }
    for(int i = 0;i < length;i++)
    {
        printf("%d ", array[i]);
    }
    // 释放数组
    free(array);
}

// 数组的初始化
void testInitialization()
{
    int array1[3] = {1,2,3}; // 指定大小
    int array2[] = {1,2}; // 不指定大小
    int array3[10] = {0}; // 将所有的成员全部设置为0
    int array4[10] = {1,2,3}; // 将前三个成员设置为1,2,3，其余的成员设置为0
}

// 对于数组名的理解
void testArrayName() {
    int array[] = {1, 2, 3};
    // 数组名是一个常量指针，指向数组的首地址
    printf("%p", array);
    for(int i = 0;i<sizeof(array)/sizeof(array[0]);i++)
    {
        printf("%d", *(array+i));
    }
    printf("\n");
}

// 二维数组的定义和使用
// (1) 二维数组在概念上是二维的：其下标在两个方向上进行变化，对其进行访问一般需要两个下标
// (2) 在内存之中并不存在二维数组，二维数组实际在硬件存储器是连续编址的，放完第一行放第二行，
// 也就是说内存之中仅仅存在一维的数组。
void testTwoDimensionArray() {
    // 二维数组的定义
    int array[3][4] = {{1, 2,  3,  4},
                       {5, 6,  7,  8},
                       {9, 10, 11, 12}};
    // 二维数组的遍历
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

void twoDimensionArrayInitialization()
{
    // 将所有的成员全部设置为0
    int array1[3][4] = {0};
    // 使用一维数组进行赋值
    int array2[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    // 每一列的元素个数为4，由于行数没有限定，所以这里需要进行初始化
    int array3[][4] = {1,2,3,4,5,6,7,8};

}

// 理解二维数组
void twoDimensionArrayNameUnderstand()
{
    int array[2][3] = {{1,2,3},{4,5,6}};
    for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
    {
        for(int j = 0; j < sizeof(array[0])/sizeof(array[0][0]); j++)
        {
            // 使用指针进行元素的访问
            // 我们的*(array+i)拿到的还是一个指针，他是一个一维的数组，所以我们要取里面的元素
            // 还需要再进行解引用的操作
            printf("%d ", *(*(array+i)+j));
        }
        printf("\n");
    }
}

// 字符串与字符数组测试
void testStringAndCharArray()
{
    char c1[] = { 'c', ' ', 'p', 'r', 'o', 'g' }; //普通字符数组
    printf("c1 = %s\n", c1); //乱码，因为没有’\0’结束符

    //以‘\0’(‘\0’就是数字0)结尾的字符数组是字符串
    char c2[] = { 'c', ' ', 'p', 'r', 'o', 'g', '\0'};
    printf("c2 = %s\n", c2);

    //字符串处理以‘\0’(数字0)作为结束符，后面的'h', 'l', 'l', 'e', 'o'不会输出
    char c3[] = { 'c', ' ', 'p', 'r', 'o', 'g', '\0', 'h', 'l', 'l', 'e', 'o', '\0'};
    printf("c3 = %s\n", c3);
}

void testPutsAndFputs()
{
    char c1[] = { 'c', ' ', 'p', 'r', 'o', 'g', '\0'};
    puts(c1); //puts会自动在字符串后面加上换行符
    fputs(c1, stdout); //fputs不会自动在字符串后面加上换行符
    puts("hello world"); //puts会自动在字符串后面加上换行符
}

void testStringLen()
{
    // strlen()函数返回字符串的长度，不包括结束符 ‘\0’
    char c1[] = { 'c', ' ', 'p', 'r', 'o', 'g', '\0'};
    printf("c1 len = %zu\n", strlen(c1));
}

int main()
{
    // testFirstDimensionArray();
    // testPointerArray();
    testVariableLengthArray();
    testArrayName();
    testTwoDimensionArray();
    twoDimensionArrayNameUnderstand();
    testStringAndCharArray();
    testPutsAndFputs();
    testStringLen();
}