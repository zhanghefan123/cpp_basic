//
// Created by huang aoan on 2022/11/29.
//

#ifndef C___LEARNING_CREATEANDDELETE_H
#define C___LEARNING_CREATEANDDELETE_H
#include <stdlib.h>
#include <string.h>
#include <iostream>
class Person{
public:
    char* name = nullptr;
    // 构造函数
    Person(const char* name){
        this->name = (char*) malloc(50);
        strcpy(this->name, name);
    }
    // 析构函数在对象被销毁时自动调用
    // 比如出作用域，或者我们主动调用delete的时候
    ~Person(){
        free(name);
        std::cout << "the person object has been deleted" << std::endl;
    }
};
void testInitializeAndDelete();
void testDeleteFunction();
#endif //C___LEARNING_CREATEANDDELETE_H
