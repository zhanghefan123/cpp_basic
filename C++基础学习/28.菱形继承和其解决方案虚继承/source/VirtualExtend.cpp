//
// Created by huang aoan on 2022/12/1.
//
#include "VirtualExtend.h"
using namespace std;
void testVirtualExtend()
{
    Derived derived;
    //1. 对“func”的访问不明确
    //derived.func();
    //cout << derived.mParam << endl;
    cout << "derived.Base1::mParam:" << derived.Base1::mParam << endl;
    cout << "derived.Base2::mParam:" << derived.Base2::mParam << endl;

    //2. 重复继承,存在两个int,访问的时候会产生二义性
    cout << "Derived size:" << sizeof(Derived) << endl; // 8

    // 下面这行代码调用会出现如下的问题
    // Non-static member 'mParam' found in multiple base-class subobjects of type 'BigBase':
    // class Derived -> class Base1 -> class BigBase
    // class Derived -> class Base2 -> class BigBase
    // member found by ambiguous name lookup
    // cout << derived.mParam << std::endl;

    // 3.为了解决这个办法，我们需要使用虚继承
    DerivedVirtual derivedVirtual;
    cout << "derivedVirtual.Base1Virtual::mParam:" << derivedVirtual.Base1Virtual::mParam << endl;
    cout << "derivedVirtual.Base2Virtual::mParam:" << derivedVirtual.Base2Virtual::mParam << endl;
    // 此时二义的问题解决
    cout << derivedVirtual.mParam << std::endl;

    // 当使用虚继承时，虚基类是被共享的，也就是在继承体系中无论被继承多少次，对象内存模型中均只会出现一个虚基类的
    // 子对象（这和多继承是完全不同的）。即使共享虚基类，但是必须要有一个类来完成基类的初始化
    // （因为所有的对象都必须被初始化，哪怕是默认的），同时还不能够重复进行初始化，那到底谁应该负责完成初始化呢？
    // C++标准中选择在每一次继承子类中都必须书写初始化语句（因为每一次继承子类可能都会用来定义对象），但是虚基类
    // 的初始化是由最后的子类完成，其他的初始化语句都不会调用。


}