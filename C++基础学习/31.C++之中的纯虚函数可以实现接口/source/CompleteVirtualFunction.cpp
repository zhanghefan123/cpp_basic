//
// Created by huang aoan on 2022/12/1.
//
#include "CompleteVirtualFunction.h"

void testCompleteVirtualFunction()
{
    Tea tea;
    Coffee coffee;
    DoBusiness(tea);
    cout << "----------------" << endl;
    DoBusiness(coffee);
}

void DoBusiness(AbstractDrinking& drink){
    drink.MakeDrink();
}