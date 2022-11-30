//
// Created by huang aoan on 2022/11/30.
//

#ifndef C___LEARNING_OPERATOROVERLOAD_H
#define C___LEARNING_OPERATOROVERLOAD_H
#include <stdio.h>
#include <iostream>
class Maker
{
public:
    Maker()
    {
        this->id = 0;
        this->age = 0;
    }
    Maker(int id, int age)
    {
        this->id = id;
        this->age = age;
    }
    // 写成成员函数，那么只需要一个参数，这个参数是加号的右边
    // 加运算符的重载
    Maker operator + (const Maker &m2) const
    {
        Maker temp(this->id + m2.id, this->age + m2.age);

        return temp;
    }

    // 进行减法运算符的重载
    Maker operator - (const Maker& m2) const{
        Maker temp(this->id - m2.id, this->age - m2.age);
        return temp;
    }

    // 友元和运算符重载的联合使用
    friend std::ostream& operator << (std::ostream& cout, const Maker& m)
    {
        cout << "id: " << m.id << ", age: " << m.age << std::endl;
        return cout;
    }

    // 进行右移运算符的重载
    friend std::istream& operator >> (std::istream& cin, Maker& m)
    {
        cin >> m.id >> m.age;
        return cin;
    }

    // 将乘法运算声明为友元函数
    friend Maker operator*(const Maker &m1, const Maker &m2);

private:
    int id;
    int age;

};
// 在外部进行乘法运算符的重载
Maker operator * (const Maker &m1, const Maker &m2);
void testAddOperator();
void testTimeOperator();
void testMinusOperator();
void testOperatorRight();

#endif //C___LEARNING_OPERATOROVERLOAD_H
