//
// Created by huang aoan on 2022/11/30.
//
#include "DynamicCreation.h"
#include <iostream>
void dynamicCreationTest()
{
    // 1.为什么不能使用c语言中的malloc函数来动态创建对象
    // 因为 当创建一个c++对象的时候会发生两件事情
    //     为对象进行内存的分配
    //     调用构造函数来初始化那块内存
    // 然而 malloc函数只是为对象分配了内存，但是并没有调用构造函数来初始化那块内存

    // new 运算符相当的代码
    // Person* person = new Person;
    // 相当于:
    // Person* person = (Person*)malloc(sizeof(Person));
    //	if(person == NULL){
    //		return 0;
    //	}
    // person->Init();

    std::string weaponName = "AK47";
    Weapon *pWeapon = new Weapon(std::move(weaponName));
    std::cout << "武器名称:" << pWeapon->getName() << std::endl;
    std::cout << "weaponName字符串的所有权被转移:(所以这里输出的为空)" << weaponName << std::endl;
    delete pWeapon;
    // 在对对象进行delete的时候会发生两件事情
    // 首先调用析构函数
    // 接着是释放内存

    // 为了防止进行多次的delete，这里需要在delete之后立刻将其置为nullptr
    pWeapon = nullptr;
}