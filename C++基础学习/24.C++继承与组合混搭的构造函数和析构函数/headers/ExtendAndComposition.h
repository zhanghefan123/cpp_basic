//
// Created by huang aoan on 2022/12/1.
//

#ifndef C___LEARNING_EXTENDANDCOMPOSITION_H
#define C___LEARNING_EXTENDANDCOMPOSITION_H
#include <iostream>
using namespace std;
class D{
public:
D(){
    cout << "D类构造函数!" << endl;
}
~D(){
    cout << "D类析构函数!" << endl;
}
};
class A{
public:
    A(){
        cout << "A类构造函数!" << endl;
    }
    ~A(){
        cout << "A类析构函数!" << endl;
    }
};
class B : public A{
public:
    B(){
        cout << "B类构造函数!" << endl;
    }
    ~B(){
        cout << "B类析构函数!" << endl;
    }
    D d;
};
class C : public B{
public:
    C(){
        cout << "C类构造函数!" << endl;
    }
    ~C(){
        cout << "C类析构函数!" << endl;
    }

};
void testExtendAndComposition();
#endif //C___LEARNING_EXTENDANDCOMPOSITION_H
