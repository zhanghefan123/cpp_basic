#include <stdio.h>
// c 是不支持重载的
// c++ 是支持重载的
// 使用c 和 c++ 进行混合编程的时候，考虑到对于函数名的处理方式的不同
// 会造成编译器在程序链接的阶段无法找到函数的具体的实现

// 但是有一种解决的方案，就是extern c
void display(){
    printf("%s", "this is c implementation function");
}