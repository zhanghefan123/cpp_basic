//
// Created by huang aoan on 2022/11/30.
//

#ifndef C___LEARNING_INITIALIZATIONLIST_H
#define C___LEARNING_INITIALIZATIONLIST_H
#include <iostream>
#include <string>
class Teacher{
private:
    std::string name;
public:
    // 这里给了自定义的构造函数就不会有默认的构造函数了
    Teacher(std::string& name):name(name){
    }
    // 进行name的获取
    std::string getName(){
        return name;
    }
};
class Classes{
private:
    int studentCount;
    int teacherCount;
    Teacher teacher;
public:
    Classes(int studentCount, int teacherCount, std::string teacherName):\
    studentCount(studentCount),teacherCount(teacherCount), teacher(teacherName){
    }

    void printInfo()
    {
        std::cout << this->studentCount \
        << " " << this->teacherCount \
        << " " << this->teacher.getName() << std::endl;
    }
};
void testInitializationList();
#endif //C___LEARNING_INITIALIZATIONLIST_H
