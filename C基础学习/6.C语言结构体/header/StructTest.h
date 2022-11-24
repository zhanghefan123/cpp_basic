//
// Created by huang aoan on 2022/11/24.
//

#ifndef C___LEARNING_STRUCTTEST_H
#define C___LEARNING_STRUCTTEST_H
// 定义结构体变量
struct Student{
    char* name;
    int age;
};

struct MathClass{
    struct Student stu1;
    struct Student stu2;
    struct Student stu3;
};

void simpleTestStruct();
void testStructArray();
void testNestedStruct();
void testStructPointer();
void testStructInHeap();
void printStudent(struct Student stu);
void printStudentPointer(struct Student *stu);
void printStudentArray(struct Student stu[], int length);
void constBack(struct Student * const p);
void constFront(const struct Student *p);
void constFrontAndBack(const struct Student * const p);
#endif //C___LEARNING_STRUCTTEST_H
