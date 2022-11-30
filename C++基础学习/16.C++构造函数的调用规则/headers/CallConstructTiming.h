//
// Created by huang aoan on 2022/11/29.
//

#ifndef C___LEARNING_CALLCONSTRUCTTIMING_H
#define C___LEARNING_CALLCONSTRUCTTIMING_H
#include <string>
#include <iostream>
class Scientist{
private:
    int age;
    double salary;
    std::string working_place;
    // 1.默认的构造函数
    // 2.默认的析构函数
    // 3.默认的拷贝构造函数,默认对于简单的值进行值拷贝,值拷贝就是浅拷贝


public:
    Scientist(){
        this->age = 10;
        this->salary = 1000;
        this->working_place = "home"; // 这里应该是调用了隐式类型转换
    };
    void printInfo()
    {
        std::cout << this->age << " " << this->salary << " " << this->working_place << std::endl;
    }
    // 定义拷贝构造函数
    Scientist(const Scientist & scientist)
    {
        this->age = scientist.age;
        this->salary = scientist.salary;
        this->working_place = scientist.working_place;
        std::cout << "copy constructor" << std::endl;
    }

    // 进行赋值运算符的定义
    Scientist & operator=(const Scientist & scientist)
    {
        this->age = scientist.age;
        this->salary = scientist.salary;
        this->working_place = scientist.working_place;
        std::cout << "assignment operator" << std::endl;
        return *this;
    }

    // 在使用一个对象来构造另一个对象的时候调用拷贝构造函数
    // 在使用一个对象来赋值给另一个对象的时候调用的是赋值运算符

    // 一旦我们声明了自定义的构造函数就不会提供默认的构造函数了
    //    Scientist(int age, double salary, std::string working_place)
    //    {
    //        this->age = age;
    //        this->salary = salary;
    //        this->working_place = working_place;
    //    }
};
void testScientist();
#endif //C___LEARNING_CALLCONSTRUCTTIMING_H
