//
// Created by huang aoan on 2022/11/30.
//
#include "FriendTest.h"
void testFriend(){

    Building building;
    MyFriend myfriend;

    CleanBedRoom(building);
    myfriend.LookAtBedRoom(building);
    myfriend.PlayInBedRoom(building);
    myfriend.visit(building);
}

void MyFriend::LookAtBedRoom(Building& building){
    cout << "我的朋友参观" << building.mBedroom << endl;
}
void MyFriend::PlayInBedRoom(Building& building){
    cout << "我的朋友玩耍在" << building.mBedroom << endl;
}

void MyFriend::visit(Building &building) {
    cout << "visit the building" << endl;
    cout << "the building has " << building.mSittingRoom << " sitting room" << endl;
    cout << "the building has " << building.mBedroom << " bed room" << endl;
}

//友元全局函数
void CleanBedRoom(Building& building){
    cout << "友元全局函数访问" << building.mBedroom << endl;
}

Building::Building(){
    this->mSittingRoom = "客厅";
    this->mBedroom = "卧室";
}