//
// Created by huang aoan on 2022/11/10.
//

#ifndef C___LEARNING_CLASSSTATICVARIABLE_H
#define C___LEARNING_CLASSSTATICVARIABLE_H
namespace cpp_basic{
    class Person{
        static int count;

    public:
        Person() {
            count++;
        }
        ~Person(){
            count--;
        }
        // 静态成员函数的意义在于管理静态成员变量
        static int getCount(){return count;}
    };
}
void testStaticVariable();
#endif //C___LEARNING_CLASSSTATICVARIABLE_H
