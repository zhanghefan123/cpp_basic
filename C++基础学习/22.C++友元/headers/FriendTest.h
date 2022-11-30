//
// Created by huang aoan on 2022/11/30.
//

#ifndef C___LEARNING_FRIENDTEST_H
#define C___LEARNING_FRIENDTEST_H
// 类的主要特点之一是数据隐藏，即类的私有成员无法在类的外部(作用域之外)访问。
// 但是，有时候需要在类的外部访问类的私有成员，怎么办？

// 解决方法是使用友元函数，友元函数是一种特权函数，c++允许这个特权函数访问私有成员。
// 这一点从现实生活中也可以很好的理解：

// 比如你的家，有客厅，有你的卧室，那么你的客厅是Public的，所有来的客人都可以进去
// ，但是你的卧室是私有的，也就是说只有你能进去，但是呢，你也可以允许你的闺蜜好基
// 友进去。

// 举一个友元的例子:
// 即我们的遥控器，遥控器可以控制电视机，但是电视机的开关是私有的，只有遥控器这个朋友
// 才能够改变这个私有的属性。
#include <iostream>
#include <string>
using namespace std;
class Building;
//友元类
class MyFriend{
public:
    // 由于是Building的友元类，所以其中的函数都是友元函数, 所以可以访问Building的私有成员
    void visit(Building& building);
//    {
//        cout << "visit the building" << endl;
//        在这里不能够直接的进行定义，因为这个Building这个类还没有定义，我们只是声明了他
//        我们可以在cpp文件中进行定义
//        cout << "the building's name is " << building.name << endl;
//        cout << "the building's size is " << building.size << endl;
//    }

    //友元成员函数
    void LookAtBedRoom(Building& building);
    void PlayInBedRoom(Building& building);
};
class Building{
    //全局函数做友元函数
    friend void CleanBedRoom(Building& building);
#if 1
    //成员函数做友元函数 -- 在这里定义朋友使用的接口
	friend void MyFriend::LookAtBedRoom(Building& building);
	friend void MyFriend::PlayInBedRoom(Building& building);
    friend void MyFriend::visit(Building &building);
#else
    //友元类 -- 如果声明了友元类，那么这个类的所有成员函数都是友元函数
    friend class MyFriend;
#endif
public:
    Building();
public:
    string mSittingRoom;
private:
    string mBedroom;
};

void testFriend();
#endif //C___LEARNING_FRIENDTEST_H
