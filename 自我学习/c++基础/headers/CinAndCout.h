//
// Created by huang aoan on 2022/11/9.
//

#ifndef C___LEARNING_CINANDCOUT_H
#define C___LEARNING_CINANDCOUT_H
namespace cpp_basic{
    // 注意：头文件之中不要进行函数的定义，否则会出现重复定义的情况
    // 如果实在想要在头文件之中进行函数的定义：
    // 解决方案1：在头文件之中定义的函数添加static关键字
    // 解决方案2：为头文件之中的函数添加inline关键字
    // 解决方案3：将函数的定义放在头文件之中的.cpp文件之中，然后在头文件之中进行声明
    void CinAndCoutTest();
}
#endif //C___LEARNING_CINANDCOUT_H
