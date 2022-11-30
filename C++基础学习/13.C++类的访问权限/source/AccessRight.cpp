//
// Created by huang aoan on 2022/11/29.
//
#include "AccessRight.h"
#include "AccessSplit.h"

void testFatherAndSon(){
    Son son("zhf", 18, "buaa", "by2206011");
    // 可以无障碍的访问public变量
    std::cout << son.name << std::endl;
    std::cout << son.name << std::endl;
    // 不可以直接访问protected变量
    // std::cout << son.address << std::endl;
    // 更不可以直接访问private变量
    // std::cout << son.bank_account << std::endl;

    // 可以通过内部的函数访问protected变量
    son.accessAddress();
    // 可以通过父类的public函数访问private变量
    son.accessBankAccount();
}