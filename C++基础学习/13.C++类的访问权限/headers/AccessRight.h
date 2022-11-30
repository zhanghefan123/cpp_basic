//
// Created by huang aoan on 2022/11/29.
//

#ifndef C___LEARNING_ACCESSRIGHT_H
#define C___LEARNING_ACCESSRIGHT_H
#include <string>
#include <iostream>
using namespace std;
class Father{
public:
    string name;
    int age;
    Father(string name, int age, string address, string bank_account){
        // 注意这里一定要输入this关键字，而不能与我们的python一样
        this->name = name;
        this->age = age;
        this->address = address;
        this->bank_account = bank_account;
    }
    string getBankAccount(){
        return bank_account;
    }
protected:
    string address;
private:
    string bank_account;
};
class Son : public Father{
public:
    void accessPublicInfo(){
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
    }
    void accessAddress(){
        cout << "address: " << address << endl;
    }
    void accessBankAccount(){cout << getBankAccount() << endl;}
    // 下面这一行会发生错误，因为address是private的
    // void accessAddress(){cout << address << endl;}
    Son(string name, int age, string address, string bank_account) : Father(name, age, address, bank_account){

    }
};
void testFatherAndSon();
#endif //C___LEARNING_ACCESSRIGHT_H
