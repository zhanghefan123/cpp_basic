//
// Created by huang aoan on 2022/11/29.
//
#include "ConstructorType.h"

void testPersonFunction()
{
    Person* person = new Person(20);
    // 拷贝构造函数的调用时机
    // ----------------------------------------
    // 当对象以值传递的方式传递给函数参数的时候
    // 当函数局部对象以值传递的方式返回的时候(vs-debug模式下会调用,vs-release模式下不会调用,qt不会调用)
    // 当用一个对象初始化另一个对象的时候调用
    Person* person_copy_1 = new Person(*person);
    // ----------------------------------------

    Person* person2 = new Person(18);
    // 进行三个person 的输出
    std::cout << person->getAge() << std::endl;
    std::cout << person_copy_1->getAge() << std::endl;
    std::cout << person2->getAge() << std::endl;

}