//
// Created by huang aoan on 2022/11/28.
//

#ifndef C___LEARNING_THREETEST_H
#define C___LEARNING_THREETEST_H
void cannotChangeValue();
void canChangeValue();
#include <iostream>
namespace zhf{
    class Lab{
    private:
        int count;
        mutable int mutableCount;
    public:
        Lab(int count,int mutableCount):count(count),mutableCount(mutableCount){}
        // count的设置
        void setCount(int count){
            this->count = count;
        }
        // const 修饰的成员函数，不能修改成员变量的值
        int getCount() const {return count; mutableCount--;};
        // 打印两个count
        void printCount() const{std::cout << count << " " << mutableCount << std::endl;};
    };
}
void testLab();
#endif //C___LEARNING_THREETEST_H
