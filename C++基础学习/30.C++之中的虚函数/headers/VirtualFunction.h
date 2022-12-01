//
// Created by huang aoan on 2022/12/1.
//

#ifndef C___LEARNING_VIRTUALFUNCTION_H
#define C___LEARNING_VIRTUALFUNCTION_H
#include <iostream>
class Animal{
public:
    virtual void speak(){
        std::cout << "动物在唱歌..." << std::endl;
    }
};
class Dog : public Animal{
public:
    virtual void speak(){
        std::cout << "小狗在唱歌..." << std::endl;
    }
};
void testVirtualFunction();
void DoBusiness(Animal& animal);
#endif //C___LEARNING_VIRTUALFUNCTION_H
