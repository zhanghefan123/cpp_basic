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
        static int getCount(){return count;}
    };
    int Person::count = 0;
}
#endif //C___LEARNING_CLASSSTATICVARIABLE_H
