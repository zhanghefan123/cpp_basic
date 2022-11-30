//
// Created by huang aoan on 2022/11/28.
//
#include "ConstTest.h"

// 1.C语言的const都具有内存,全局的const变量位于常量区,一旦初始化就不能够修改
// 也无法通过指针进行间接的修改。并且具有外部链接的属性，可以通过extern进行使用。

// 局部的const初始化之后不能直接修改，可以间接修改。

// 2.C++的const不必要进行内存空间的创建，是否为const常量创建内存取决于如何进行
// 使用。一般来说一个const仅仅将一个名字用一个值来进行替代(就像#define一样)
// 那么存储空间就不需要创建。

// 不过，取一个const地址, 或者把它定义为extern,则会为该const创建内存空间。

// 在c++中，出现在所有函数之外的const作用于整个文件(也就是说它在该文件外不可见)，
// 默认为内部连接，c++中其他的标识符一般默认为外部连接。

// 添加volatile可以禁止优化

// const 和 #define 优先选择 const
// 1. const 可以进行类型检查，#define 不可以
// 2. const 可以进行作用域控制，#define 不可以，默认从定义位置到文件尾
// 3. const 有命名空间，#define 没有

int main()
{
    cannotChangeValue();
    canChangeValue();
    testLab();
}