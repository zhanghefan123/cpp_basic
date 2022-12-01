//
// Created by huang aoan on 2022/12/1.
//
#include "VirtualDel.h"

void test(){

    // 这里我们使用基类的指针指向子类的对象
    People* people = new Worker;
    // 然后我们使用基类的指针去调用析构函数，希望能够调用子类的析构函数
    // 再调用基类的析构函数，这个时候就需要使用虚析构函数
    delete people;
}