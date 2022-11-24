//
// Created by huang aoan on 2022/11/24.
//
# include "../header/StructTest.h"
# include <stdio.h>
# include <stdlib.h>
void simpleTestStruct()
{
    struct Student stu1;
    stu1.name = "huangaoan";
    stu1.age = 18;
}

void testStructArray()
{
    struct Student stu1[5];
    // 为每个stu赋值
    for (int i = 0; i < 5; i++) {
        stu1[i].name = "huangaoan";
        stu1[i].age = 18;
    }
}

// 测试嵌套的结构体
void testNestedStruct()
{
    struct MathClass mathClass;
    mathClass.stu1.name = "huangaoan";
    mathClass.stu1.age = 18;
    mathClass.stu2.name = "huangaoan";
    mathClass.stu2.age = 18;
    mathClass.stu3.name = "huangaoan";
    mathClass.stu3.age = 18;
}

// 指向普通结构体变量的指针
void testStructPointer()
{
    struct Student stu1;
    stu1.name = "huangaoan";
    stu1.age = 18;
    struct Student *p = &stu1;
    printf("name = %s, age = %d\n", p->name, p->age);
}

// 堆区结构体创建
void testStructInHeap()
{
    struct Student *p = (struct Student *)malloc(sizeof(struct Student));
    p->name = "huangaoan";
    p->age = 18;
    printf("name = %s, age = %d\n", p->name, p->age);
}

// 结构体作为函数的参数
void printStudent(struct Student stu)
{
    /**
     * 这里是作为一整个结构体进行拷贝，所以不会影响原来的值
     */
    printf("name = %s, age = %d\n", stu.name, stu.age);
}

// 结构体指针作为函数参数
void printStudentPointer(struct Student *stu)
{
    /**
     * 这里传递结构体的地址，所以会影响原来的值
     */
    stu->age = 100;
    printf("name = %s, age = %d\n", stu->name, stu->age);
}

// 结构体数组名作为函数参数
void printStudentArray(struct Student stu[], int length)
{
    /**
     * 这里传递的是结构体数组的首地址,由于我们是使用指针进行接收
     * 丢失了数组的长度信息，所以我们需要手动传递数组的长度
     */
     for(int i = 0; i < length; i++) {
         printf("name = %s, age = %d\n", stu[i].name, stu[i].age);
     }
}

// const 在后
void constBack(struct Student * const p)
{
    //p = NULL; //err
    p->age = 10; //ok
}

// const 在前
void constFront(const struct Student *  p)
{
    p = NULL; //ok
    //p->age = 10; //err
}

// const 在前后
void constFrontAndBack(const struct Student * const p)
{
    //p = NULL; //err
    //p->age = 10; //err
}