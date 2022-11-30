//
// Created by huang aoan on 2022/11/30.
//

#ifndef C___LEARNING_ARRAYCREATEANDDEL_H
#define C___LEARNING_ARRAYCREATEANDDEL_H
#include <iostream>
class Destroyer{
private:
    int cannonCount;
    int personCount;
public:
    Destroyer()
    {
        cannonCount = 0;
        personCount = 0;
    }
    Destroyer(int cannonCount, int personCount):cannonCount(cannonCount), personCount(personCount){
    }
    // 进行两个属性的setter和getter的设置
    void setCannonCount(int cannonCount)
    {
        this->cannonCount = cannonCount;
    }
    int getCannonCount()
    {
        return cannonCount;
    }
    void setPersonCount(int personCount)
    {
        this->personCount = personCount;
    }
    int getPersonCount()
    {
        return personCount;
    }
    ~Destroyer()
    {
        std::cout << "Destroyer is destroyed" << std::endl;
    }
};
class Fleet{
private:
    Destroyer* destroyers;
public:
    Fleet(int destroyerCount)
    {
        destroyers = new Destroyer[destroyerCount];
    }

    Destroyer& getDestroyerByIndex(int index){
        // 注意这里需要返回的是引用，接收者也需要使用引用来接收
        Destroyer& tmp = destroyers[index];
        return tmp;
    };
    ~Fleet(){
        // 这里进行数组的删除
        // 以这样的形式调用才会对每个对象调用析构函数
        delete[] destroyers;
    }
};
void testArrayCreateAndDel();
#endif //C___LEARNING_ARRAYCREATEANDDEL_H
