//
// Created by huang aoan on 2022/11/30.
//

#ifndef C___LEARNING_DYNAMICCREATION_H
#define C___LEARNING_DYNAMICCREATION_H
#include <string>
#include <utility>
class Weapon{
private:
    std::string name;
public:
    // 默认构造的调用
    // std::move 将内存的所有权从一个地方搬迁到另一个地方
    // 这里是从实际参数搬迁到形式参数之中。
    Weapon(std::string name):name(name){

    }

    // 进行名称的获取
    std::string getName(){
        return name;
    }
};
void dynamicCreationTest();
#endif //C___LEARNING_DYNAMICCREATION_H
