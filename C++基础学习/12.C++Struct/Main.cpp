//
// Created by huang aoan on 2022/11/29.
//
#include "CppStruct.h"

int main()
{
    Person p;
    p.name = "zhf";
    p.age = 18;
    p.printInfo();
    Solider s("zhf", 18);
    s.printInfo();
    // s.name = "zhf"; 无法访问
    return 0;
}