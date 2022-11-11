////
//// Created by huang aoan on 2022/11/9.
////
//
# include <iostream>
# include "headers/ConcatStringWithSStream.h"
# include "headers/CinAndCout.h"
# include "headers/InlineFunction.h"
# include "headers/MacroAndConstTest.h"
# include "headers/StaticKeyWord.h"
# include "headers/WeakAndStrongSymbol.h"
# include "headers/ClassStaticVariable.h"
# include "headers/LocalStaticVariable.h"
# include "headers/NameSpaceTest.h"


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
    // 测试7：进行static关键字的测试
    // static关键字的作用是使得函数只能在本cpp文件之中被使用,我们可以将内部逻辑，不想作为外部工具的函数打上我们的static关键字
    int sqrt_result = cpp_basic::sqrt_using_multiply(2);
    cout << sqrt_result << endl;
    // 测试8：进行静态变量的测试
    auto person1 = new cpp_basic::Person();
    cout << "人数：" << cpp_basic::Person::getCount() << endl;
    cout << typeid(person1).name() << endl;
    delete person1;
    cout << "人数：" << cpp_basic::Person::getCount() << endl;
    // 测试9：进行局部静态变量的测试
    cout << cpp_basic::testLocalStaticVariable() << endl;
    cout << cpp_basic::testLocalStaticVariable() << endl;
    cout << cpp_basic::testLocalStaticVariable() << endl;
    // 测试10：进行弱符号和强符号的测试,发现最终的结果是40而不是20
    // 说明被覆盖了
    cout << cpp_basic::weak <<endl;
    // 测试11：命名空间测试
    zhf::buaa::display();
    // 测试12：进行using的测试
}
