//
// Created by huang aoan on 2022/11/28.
//
#include <iostream>
#include "NameSpace.h"
using namespace std;

void buaa::print() {
    cout << "buaa" << endl;
}

void buaa::zhf::print() {
    cout << "buaa zhf" << endl;
}

void usingTest::printUsing() {
    cout << "usingTest" << endl;
}

void usingTest::func(){
    cout << "func()" << endl;
}

void usingTest::func(int x){
    cout << "func(int x)" << endl;
}

int usingTest::func(int x,int y){
    cout << "func(int x,int y)" << endl;
    return 0;
}