//
// Created by huang aoan on 2022/11/30.
//

#ifndef C___LEARNING_DEPPANDSHALLOWCOPY_H
#define C___LEARNING_DEPPANDSHALLOWCOPY_H
#include <string>
#include <iostream>
using namespace std;
class Marine{
private:
    char* mGun;
    double mSalary;
public:
    // 自定义构造函数
    Marine(const char* gun, double salary){
        this->mGun = (char*)malloc(64);
        strcpy(this->mGun,gun);
        this->mSalary = salary;
    }
    // 一般情况下，浅拷贝没有任何副作用，但是当类中有指针，
    // 并且指针指向动态分配的内存空间，析构函数做了动态内存释放的处理，
    // 会导致内存问题。即指针空悬。

    // 自定义拷贝构造函数
    Marine(const Marine& marine)
    {
        char* buffer = (char*)malloc(64);
        strcpy(buffer,marine.mGun);
        this->mGun = (char*)malloc(64);
        strcpy(this->mGun, buffer);
        this->mSalary = marine.mSalary;
        free(buffer);
    }

    ~Marine()
    {
        free(this->mGun);
    }

    // 进行信息的打印
    void printInfo()
    {
        std::cout << this->mGun << " " << this->mSalary << std::endl;
    }
};
void testDeepCopy();
#endif //C___LEARNING_DEPPANDSHALLOWCOPY_H
