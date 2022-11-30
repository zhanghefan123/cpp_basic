//
// Created by huang aoan on 2022/11/28.
//
#include "Reference.h"
#include <iostream>
using namespace std;

// 引用的使用场景

void knownReference(){
    /**
     * 引用的语法
     */
    int a = 10;
    //给变量a取一个别名b
    int& b = a;
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
    cout << "------------" << endl;
    //操作b就相当于操作a本身
    b = 100;
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
    cout << "------------" << endl;
    //一个变量可以有n个别名
    int& c = a;
    c = 200;
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
    cout << "c:" << c << endl;
    cout << "------------" << endl;
    //a,b,c的地址都是相同的
    cout << "a:" << &a << endl;
    cout << "b:" << &b << endl;
    cout << "c:" << &c << endl;
}

void attentionWhenUsingReference(){
    /**
     * 引用的注意事项
     */
    //1) 引用必须初始化
        // int& ref; //报错:必须初始化引用，即给他进行赋值
    //2) 引用一旦初始化，不能改变引用的指向
    int a = 10;
    int b = 20;
    int& ref = a; // & 这个是引用的标记
    ref = b; // 不能改变引用,这里不是让引用来引用b，而是将b的值赋值给a
    cout << "a的地址为:" << &a << endl;
    cout << "b的地址为:" << &b << endl;
    cout << "ref的地址为:" << &ref << endl;
    // (3) 引用必须引用一块合法的空间
}

void createReferenceArray(){
    // 三种方法为空间取别名

    // 1. 建立数组引用方法一 定义数组类型,小括号可要可不要
    typedef int (ArrRef)[10];
    int arr[10];
    // 1.2 建立引用
    ArrRef& aRef = arr;
    for (int i = 0; i < 10;i ++){
        aRef[i] = i+1;
    }
    for (int i = 0; i < 10;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    // 2. 建立数组引用方法二 直接进行引用的定义
    int(&f)[10] = arr;
    for (int i = 0; i < 10; i++){
        f[i] = i+10;
    }
    for (int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // 第三种方法 直接进行引用数组类型的定义
    typedef int(&ArrRef2)[10];
    ArrRef2 f2 = arr;
    for (int i = 0; i < 10; i++){
        f2[i] = i+20;
    }
    for (int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }
}


// 发现是引用转换为int* const ref = &a;
void originalOfReference(int& ref){
/**
 * @param ref 传递的是引用
 */
    // ref 是引用，转换为*ref = 100
    ref = 100;

}

// c语言改变指针的指向
// c语言为什么只能够使用二级指针来进行改变呢？
// 以为如果我们仅仅传递一个一级指针，那么他将会被拷贝一份给到我们的形式参数，而不是改变原来的指针
void changeDirectionOfPointer(int **p, int* another_direction){
    *p = another_direction;
    cout << "p:" << **p << endl;
}

// C++之中的指针引用
void referenceOfAPointer(){
    int a = 100;
    int *p = &a;
    int* &ref = p;
    cout << "指针引用的值为:" << *ref << endl;
}

// C++ 之中不用使用二级指针来改变指针的指向，只要使用指针引用即可
// 因为这个引用就是变量本身，不涉及到值拷贝的问题，相当于在直接使用外面的指针
void changeDirectionOfPointerByCpp(int* &p, int* another_direction)
{
    // 如果仅仅传递了一个指针a，那么就是int*&p = a ,p就是a的别名
    p = another_direction;
}

// C++ 常量引用
void constReference(const int& param){
/**
 * @brief 常量引用主要用于函数的参数传递，这样可以避免函数内部对参数的修改 \n
 *         将函数的形参定义为常量引用的好处：\n
 *          > 不产生新的变量,减少实参传递时候的开销\n
 *          > 由于引用可能导致实参在函数内部被改变，将其定义为常量引用可以消除影响。
 * @param param 直接使用外部的变量，但是不允许对外部的变量进行修改
 */
 std::cout << "param:" << param << std::endl;
}

// C++ 普通引用
void normalReference(int& param){
    /**
     * @brief 最常看见引用的地方是函数参数和返回值之中，当引用被作为函数参数的时候，
     * 在函数内任何对引用的修改，将对该函数外的参数产生影响。
     * \n \n
     * 从函数中返回一个引用，必须像从函数中返回一个指针一样对待，当函数返回值是引用的时候，
     * 与引用关联的内存一定要存在,所以不要返回对于局部变量的引用，不然会出现悬垂引用的问题。
     */
    param = 100;
}