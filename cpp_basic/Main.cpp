//
// Created by huang aoan on 2022/11/9.
//

# include <iostream>
# include "headers/ConcatStringWithSStream.h"
# include "headers/CinAndCout.h"
# include "headers/InlineFunction.h"
# include "headers/MacroAndConstTest.h"
# include "../c_and_cpp_mixed_programming/headers/myFunc.h"

using namespace std;


int main()
{
    // 测试1：cin cout 测试
    cpp_basic::CinAndCoutTest();
    // 测试2：字符串连接测试
    string str1 = "hello";
    string str2 = "world";
    string split = " ";
    string result = cpp_basic::concatStringWithSStream(str1, str2, split);
    cout << result;
    // 测试3：内联函数测试
    int a = 3;
    int b = 4;
    int *a_pointer = &a;
    int *b_pointer = &b;
    cpp_basic::inlineSwap(a_pointer,b_pointer);
    cout << a << ',' << b << endl;
    // 测试4：宏定义函数测试 -- 宏定义由于是替换，所以每个变量都要打括号
    // 我们可以使用我们的内联函数来进行替代
    int macro_result = MACRO_SQRT(2);
    cout << macro_result << endl;
    // 测试5：我们如果要定义常量的话，我们可以使用static const关键字
    // 进行静态常量的定义
    cout << "ipv4 protocol number :" << cpp_basic::ipv4_protocol << endl;
    // 测试6：进行混合编程的测试
    display();
}