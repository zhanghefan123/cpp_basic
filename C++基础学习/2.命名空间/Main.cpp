//
// Created by huang aoan on 2022/11/28.
//

#include "NameSpace.h"
#include <iostream>
// using 编译指令 让整个命名空间的标识符都可用
using namespace std;
int main()
{
    buaa::print();
    buaa::zhf::print();

    // 进行命名空间引用，使得另一个命名空间之中的标识符可以直接可用
    // 但是这样可能会发生命名的冲突
    using usingTest::printUsing;
    printUsing();

    // using碰到函数虫灾，相当于将这个函数的所有重载都进行了引入
    using usingTest::func;
    func();
    func(1);
    func(1,2);

    // std命名空间之中的内容已经全部被引入可以直接使用
    cout << "Hello, World!" << std::endl;
}