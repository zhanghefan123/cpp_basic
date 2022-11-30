//
// Created by huang aoan on 2022/11/9.
//

#ifndef C___LEARNING_MYFUNC_H
#define C___LEARNING_MYFUNC_H
// 在linux下测试的时候
// c函数: void MyFunc(){} ,被编译成函数: MyFunc
// c++函数: void MyFunc(){},被编译成函数: _Z6Myfuncv
/**
 * 通过这个测试，由于c++中需要支持函数重载，所以c和c++中对同一个函数经过编译后生成的函数名是不相同的，
 * 这就导致了一个问题，如果在c++中调用一个使用c语言编写模块中的某个函数，那么c++是根据c++的名称修饰
 * 方式来查找并链接这个函数，那么就会发生链接错误
 */
/**
 * 那么我们想要在C++之中调用使用C语言编写的模块中的函数，那么我们就需要使用extern "C"来修饰这个函数
 */
extern "C" void display();
extern "C" {
    void displayC();
}
void displayCpp();
#endif //C___LEARNING_MYFUNC_H
