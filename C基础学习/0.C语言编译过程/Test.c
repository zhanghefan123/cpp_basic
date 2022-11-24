// 第一步-进行预处理：宏定义展开，头文件展开，条件编译，注释删除 gcc -E Test.c -o Test.i
// 第二步-进行编译：检查语法，将预处理后的文件编译成汇编文件 gcc -S Test.i -o Test.s
// 第三步-进行汇编：将汇编文件编译成目标文件 gcc -c Test.s -o Test.o
// 第四步-进行链接：由于c语言需要依赖各种库，所以将目标文件和库文件链接成可执行文件 gcc Test.o -o Test
# include <stdio.h>
int main()
{
    int a;
    a = 10;
    printf("hello world %d", a);
}
