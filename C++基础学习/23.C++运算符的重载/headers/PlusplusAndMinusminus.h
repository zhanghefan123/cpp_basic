//
// Created by huang aoan on 2022/11/30.
//

#ifndef C___LEARNING_PLUSPLUSANDMINUSMINUS_H
#define C___LEARNING_PLUSPLUSANDMINUSMINUS_H
#include <iostream>
using namespace std;
class MilitaryTroop{
private:
    int count;
public:
    MilitaryTroop(int count):count(count){

    }
    // 友元函数不是成员函数，所以不会自动传递this指针
    // 并且在定义他的时候也不用加MilitaryTroop::
    friend ostream& operator << (ostream& cout, const MilitaryTroop& m);

    // 进行前置++重载
    MilitaryTroop& operator ++(){
        this->count++;
        return *this;
    }

    // 进行后置++重载
    MilitaryTroop operator ++(int){
        // 先进行old的存储
        MilitaryTroop old = *this;
        // 再对this进行++
        this->count++;
        // 返回的是old
        return old;
    }

    // 进行前置--重载
    MilitaryTroop& operator --(){
        this->count--;
        return *this;
    }

    // 进行后置--重载
    MilitaryTroop operator --(int){
        MilitaryTroop old = *this;
        this->count--;
        return old;
    }
};

void testMilitaryTroop();
#endif //C___LEARNING_PLUSPLUSANDMINUSMINUS_H
