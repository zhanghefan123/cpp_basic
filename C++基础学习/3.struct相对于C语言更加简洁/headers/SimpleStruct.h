//
// Created by huang aoan on 2022/11/28.
//

#ifndef C___LEARNING_SCOPEOPERATOR_H
#define C___LEARNING_SCOPEOPERATOR_H
#include <string>
#include <iostream>
namespace zhf{
    struct Student{
        std::string mName;
        int mAge;
        void setName(std::string name){ mName = name; }
        void setAge(int age){ mAge = age; }
        void showStudent(){
            std::cout << "Name:" << mName << " Age:" << mAge << std::endl;
        }
    };
    void testStudent();
}

#endif //C___LEARNING_SCOPEOPERATOR_H
