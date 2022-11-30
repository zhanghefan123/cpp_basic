//
// Created by huang aoan on 2022/11/29.
//
#include "CreateAndDelete.h"
#include <iostream>
using namespace std;
void testInitializeAndDelete()
{
    // 测试Person
    Person person("zhf");
    std::cout << person.name << std::endl;
}

void testDeleteFunction()
{
    int a;
    Person* person = new Person("zhf");
    // delete 只能够作用于指针
    delete person;
    // 这里的cin主要是起到暂停的作用
    cin >> a;
}