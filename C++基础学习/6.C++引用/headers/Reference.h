//
// Created by huang aoan on 2022/11/28.
//

#ifndef C___LEARNING_REFERENCE_H
#define C___LEARNING_REFERENCE_H
void knownReference();
void attentionWhenUsingReference();
void createReferenceArray();
// 指针的本质是一个常指针
void originalOfReference(int& ref);
// c语言之中想要改变指针的指向
void changeDirectionOfPointer(int **p, int *another_direction);
// c++之中的指针的引用
void referenceOfAPointer();
// c++之中的引用改变指针的指向
void changeDirectionOfPointerByCpp(int* &p, int *another_direction);
// 常量引用
void constReference(const int& param);
// 普通引用
void normalReference(int& param);
#endif //C___LEARNING_REFERENCE_H
