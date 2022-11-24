#include "header/StructTest.h"
#include "stdlib.h"
int main()
{
    simpleTestStruct();
    testStructArray();
    testNestedStruct();
    testStructPointer();
    testStructInHeap();
    struct Student stu1;
    stu1.name = "huangaoan";
    stu1.age = 18;
    printStudent(stu1);
    // 创建一个Student结构体数组
    struct Student stu2[5];
    for (int i = 0; i < 5; i++) {
        stu2[i].name = "huangaoan";
        stu2[i].age = 18;
    }
    printStudentArray(stu2, 5);
    // 创建一个Student结构体指针
    struct Student *p = (struct Student *)malloc(sizeof(struct Student));
    p->name = "huangaoan";
    p->age = 18;
    printStudentPointer(p);
    // 结构体指针作为函数参数
    constBack(p);
    constFront(p);
    constFrontAndBack(p);
    return 0;
}