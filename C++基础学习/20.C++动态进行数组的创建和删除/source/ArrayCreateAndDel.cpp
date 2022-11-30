//
// Created by huang aoan on 2022/11/30.
//
#include "ArrayCreateAndDel.h"
#include <iostream>
using namespace std;
void testArrayCreateAndDel()
{
    Fleet fleet(10);
    // 进行每一条destroyer的打印
    for (int i = 0; i < 10; i++)
    {
        Destroyer& tmp = fleet.getDestroyerByIndex(i);
        tmp.setCannonCount(10);
        tmp.setPersonCount(10);
    }
    // 进行每一条destroyer的打印
    for (int i = 0; i < 10; i++)
    {
        Destroyer& tmp = fleet.getDestroyerByIndex(i);
        cout << "第" << i << "条destroyer的炮台数量为：" << tmp.getCannonCount() << endl;
        cout << "第" << i << "条destroyer的人员数量为：" << tmp.getPersonCount() << endl;
    }

}