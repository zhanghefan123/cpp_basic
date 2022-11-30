//
// Created by huang aoan on 2022/11/30.
//

#ifndef C___LEARNING_ASSIGNOPERATOROVERLOAD_H
#define C___LEARNING_ASSIGNOPERATOROVERLOAD_H
#include <string>
#include <iostream>
#include <utility>
using namespace std;
class PostGraduate{
private:
    double* grade; // 考试成绩数组
    int num; // 考试科目的数量
    string name; // 姓名
public:
    // 这样仅仅会调用一次拷贝构造函数
    PostGraduate(int num, string name): num(num), name(std::move(name)){
       this->grade = (double*)malloc(sizeof(double) * num);
    }

    // 自定义拷贝构造函数
    PostGraduate(const PostGraduate& postGraduate){
        this->num = postGraduate.num;
        this->name = postGraduate.name;
        this->grade = (double*)malloc(sizeof(double) * num);
        for(int i = 0; i < num; i++){
            this->grade[i] = postGraduate.grade[i];
        }
    }

    // 进行赋值运算符的定义，能够处理给自己赋值
    PostGraduate& operator = (const PostGraduate& postGraduate){
        // 进行自我赋值的判断，如果是的话直接返回自己
        if(this == &postGraduate){
            return *this;
        }
        this->num = postGraduate.num;
        this->name = postGraduate.name;
        this->grade = (double*)malloc(sizeof(double) * num);
        for(int i = 0; i < num; i++){
            this->grade[i] = postGraduate.grade[i];
        }
        return *this;
    }

    ~PostGraduate(){
        free(this->grade);
    }

    // 进行左移运算符的重载
    friend ostream& operator << (ostream& os, const PostGraduate& p){
        os << p.name << " ";
        for(int i = 0; i < p.num; i++){
            os << p.grade[i] << " ";
        }
        os << endl;
        return os;
    }
};
void testAssignOperatorOverload();
#endif //C___LEARNING_ASSIGNOPERATOROVERLOAD_H
