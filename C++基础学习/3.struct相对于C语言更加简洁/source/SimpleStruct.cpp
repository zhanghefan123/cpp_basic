//
// Created by huang aoan on 2022/11/28.
//
#include "SimpleStruct.h"
using namespace zhf;
// 进行学生struct的测试
void zhf::testStudent() {
    Student stu1;
    stu1.mName = "zhangsan";
    stu1.mAge = 20;
    std::cout << "name: " << stu1.mName << " age: " << stu1.mAge << std::endl;
}