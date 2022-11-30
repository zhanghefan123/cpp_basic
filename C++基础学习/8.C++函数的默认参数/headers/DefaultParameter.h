//
// Created by huang aoan on 2022/11/29.
//

#ifndef C___LEARNING_DEFAULTPARAMETER_H
#define C___LEARNING_DEFAULTPARAMETER_H
// 默认参数仅需要在声明的时候进行定义即可
// 在定义的时候如果再进行默认参数的指定，就会发生错误
void testDefault01(int a = 10, int b = 20);
void testDefault02(int a, int b, int c = 20);
#endif //C___LEARNING_DEFAULTPARAMETER_H
