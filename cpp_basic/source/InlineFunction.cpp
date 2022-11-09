//
// Created by huang aoan on 2022/11/9.
//
# include <iostream>

using namespace std;
namespace cpp_basic{
//    我们需要注意，我们的内联函数不能先在source之中定义
//    然后再到我们的头文件之中进行声明，这样是不行的
//    我们只要在头文件之中进行声明和定义就可以了
//    inline void inlineSwap(int* a, int* b)
//    {
//        int temp = *a;
//        *a = *b;
//        *b = temp;
//    }

//    如果我们在头文件中声明，而在源文件之中定义，编译时不会出错，但在链接时会出错。func() 是内联函数，编译期间会用它来替换函数调用处
//    编译完成后函数就不存在了，链接器在将多个目标文件（.o或.obj文件）合并成一个可执行文件时找不到
//    func() 函数的定义，所以会产生链接错误。
//    内联函数虽然叫做函数，在定义和声明的语法上也和普通函数一样，但它已经失去了函数的本质。函数是
//    一段可以重复使用的代码，它位于虚拟地址空间中的代码区，也占用可执行文件的体积，而内联函数的代码
//    在编译后就被消除了，不存在于虚拟地址空间中，没法重复使用。
}
