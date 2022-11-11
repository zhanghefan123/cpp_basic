//
// Created by huang aoan on 2022/11/9.
//

#ifndef C___LEARNING_INLINEFUNCTION_H
#define C___LEARNING_INLINEFUNCTION_H
namespace cpp_basic{
    // 头文件之中唯一可以写定义的是我们的内联的函数
    // 内联函数的定义必须和声明放在一起。
    // 因为我们内联函数的调用会被替换成为内部的代码
    // 所以不会出现重复定义的问题
    inline void inlineSwap(int* a, int*b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}
#endif //C___LEARNING_INLINEFUNCTION_H
