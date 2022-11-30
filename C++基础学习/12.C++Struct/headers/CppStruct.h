//
// Created by huang aoan on 2022/11/29.
//

#ifndef C___LEARNING_CPPSTRUCT_H
#define C___LEARNING_CPPSTRUCT_H
typedef struct _Person {
    // C++结构体之中变量的作用域都是public的
    char *name;
    int age;
    // C++中的结构体中可以定义函数
    // C语言之中是将对象的属性和行为分离开了
    void printInfo(); // 函数的声明
} Person;

class Solider{
    // C++中的类之中的变量默认是private的
    const char *name;
    int age;
public:
    Solider(const char* name, int age){
        name = name;
        age = age;
    }
    void printInfo();
};

#endif //C___LEARNING_CPPSTRUCT_H
