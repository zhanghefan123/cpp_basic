//
// Created by huang aoan on 2022/12/1.
//

#ifndef C___LEARNING_VIRTUALDEL_H
#define C___LEARNING_VIRTUALDEL_H
#include <iostream>
using namespace std;
class People{
public:
    People(){
        cout << "构造函数 People!" << endl;
    }
    virtual void showName() = 0;
    virtual ~People(){
        cout << "析构函数 People!" << endl;
    }
};

class Worker : public People{
public:
    Worker(){
        cout << "构造函数 Worker!" << endl;
        pName = new char[10];
    }
    virtual void showName(){
        cout << "打印子类的名字!" << endl;
    }
    ~Worker(){
        cout << "析构函数 Worker!" << endl;
        if (pName != NULL){
            delete pName;
        }
    }
private:
    char* pName;
};

void test();
#endif //C___LEARNING_VIRTUALDEL_H
