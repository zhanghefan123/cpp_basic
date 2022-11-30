//
// Created by huang aoan on 2022/11/28.
//
#include "Reference.h"
#include <iostream>
using namespace std;
// 引用的作用1：给空间取外号，这个空间包括变量，数组
// 引用的作用2：让语法更加简洁
// 引用的作用3：一旦我们声明了一个变量的引用，我们就可以在函数内部进行更改
// 无论是变量，还是指针。
int main()
{
    knownReference();
    attentionWhenUsingReference();
    createReferenceArray();
    // 指针的本质是一个常指针
    int a = 10;
    int b = 20;
    int& aRef = a; //自动转换为int* const aRef = &a;这也能说明引用为什么必须初始化
    aRef = 20; //内部发现aRef是引用，自动帮我们转换为: *aRef = 20;
    cout << "a:" << a << endl;
    cout << "aRef:" << aRef << endl;
    originalOfReference(a);
    int *p = &a;
    int *pb = &b;

    // * 指针的地址 就是指针的值
    // * 指针 就是指针指向的地址的值
    changeDirectionOfPointer(&p, pb);

    // 指针引用
    referenceOfAPointer();

    // 使用引用改变指针的指向
    int c = 30;
    int d = 40;
    int* pc = &c;
    int* pd = &d;
    changeDirectionOfPointerByCpp(pc, pd);
    cout << "*pc:" << *pc << endl;

    // 常量引用
    const int e = 50;
    constReference(e);

    // 普通引用
    int f = 60;
    normalReference(f);
    cout << "param:" << f << endl;
}