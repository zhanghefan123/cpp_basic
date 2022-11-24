//
// Created by huang aoan on 2022/11/24.
//

#ifndef C___LEARNING_TYPEDEFTEST_H
#define C___LEARNING_TYPEDEFTEST_H
typedef unsigned int u32;
typedef unsigned short u16;
typedef struct PERSON{
    const char *name;
    char* array;
    int age;
}Person;

void testCharType();
void splitLine();
void testConvert();
void testFloat();
void testBaseOfNumbers();
void testComplement();
void testOverflow();
void printfAndPutCharTest();
void testScanfAndGetChar();
void testImplicitTypeConversion();
void testExplicitTypeConversion();
void testTypeDef();
#endif //C___LEARNING_TYPEDEFTEST_H
