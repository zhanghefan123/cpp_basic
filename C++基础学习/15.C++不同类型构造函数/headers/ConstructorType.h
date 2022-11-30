//
// Created by huang aoan on 2022/11/29.
//

#ifndef C___LEARNING_CONSTRUCTORTYPE_H
#define C___LEARNING_CONSTRUCTORTYPE_H
#include <iostream>
class Person{
private:
    int mAge{};
public:
    // 无参数构造
    Person(){
        std::cout << "no param constructor" << std::endl;
    }
    // 有参数构造
    // 这里加上一个explicit是避免隐式类型转换
    explicit Person(int age)
    {
        this->mAge = age;
    }
    // 拷贝构造函数
    Person(const Person & person)
    {
        this->mAge = person.mAge;
    }
    // 进行mAge的获取
    int getAge(){
        return mAge;
    }
};
void testPersonFunction();
#endif //C___LEARNING_CONSTRUCTORTYPE_H
