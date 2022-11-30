//
// Created by huang aoan on 2022/11/30.
//

#ifndef C___LEARNING_INDEXOPERATOR_H
#define C___LEARNING_INDEXOPERATOR_H
#include <iostream>
#include <utility>
#include <exception>
using namespace std;
class Ship{
/**
 * @param name 船名
 * @param capacity 载重
 */
private:
    string name;
    int capacity;
public:
    Ship()
    {
        name = "default";
        capacity = 0;
    }
    Ship(string name, int capacity):name(std::move(name)), capacity(capacity){
    }
    // 进行设置
    void setName(std::string name)
    {
        this->name = std::move(name);
    }
    void setCapacity(int capacity)
    {
        this->capacity = capacity;
    }
    // 进行获取
    std::string getName()
    {
        return name;
    }
    int getCapacity()
    {
        return capacity;
    }
    // 信息打印
    void printInfo()
    {
        cout << "name: " << name << " capacity: " << capacity << endl;
    }
};

class OutOfRangeError : public exception{
private:
    string message;
public:
    OutOfRangeError(string message):message(std::move(message)){
    }
    const char* what() const noexcept override{
        return message.c_str();
    }
};

class MarineForce{
private:
    Ship *ships;
    int size;
public:
    MarineForce(int size):size(size){
        ships = new Ship[size];
    }

    Ship& operator[](int index)
    {
        if(index < 0 || index >= size){
            throw OutOfRangeError("index out of range");
        }
        else
        {
            return ships[index];
        }
    }

    ~MarineForce(){
        delete []ships;
    }

    // 获取数量
    int getSize(){
        return size;
    }
};
void indexOperatorTest();
#endif //C___LEARNING_INDEXOPERATOR_H
