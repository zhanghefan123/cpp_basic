//
// Created by huang aoan on 2022/11/30.
//
#include "PlusplusAndMinusminus.h"

ostream& operator<<(ostream& os, const MilitaryTroop& militaryTroop)
{
    os << "MilitaryTroops: " << militaryTroop.count << endl;
    return os;
}

void testMilitaryTroop()
{
    MilitaryTroop troop(100);
    MilitaryTroop troop1 = troop++;
    troop--;
    cout << troop << troop1;
}