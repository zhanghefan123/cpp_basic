//
// Created by huang aoan on 2022/11/24.
//

#ifndef C___LEARNING_TYPEDEFTEST_H
#define C___LEARNING_TYPEDEFTEST_H
typedef int INT;
typedef char BYTE;
typedef BYTE T_BYTE;
typedef unsigned char UBYTE;

typedef struct type
{
    UBYTE a;
    INT b;
    T_BYTE c;
}TYPE, *PTYPE;

void TestTypedef();
#endif //C___LEARNING_TYPEDEFTEST_H
