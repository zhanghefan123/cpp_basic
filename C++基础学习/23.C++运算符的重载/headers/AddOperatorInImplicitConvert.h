//
// Created by huang aoan on 2022/11/30.
//

#ifndef C___LEARNING_ADDOPERATORINIMPLICITCONVERT_H
#define C___LEARNING_ADDOPERATORINIMPLICITCONVERT_H
#include <iostream>
using namespace std;
class Complex {
public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
    Complex operator+(const Complex &c) const {
        return {real + c.real, imag + c.imag};
    }
    Complex operator+(double r) const {
        return {real + r, imag};
    }

    friend Complex operator+(const Complex& a, const Complex &b);

    friend ostream& operator<<(ostream &os, const Complex &c);

private:
    double real;
    double imag;
};
void testAddOperatorInImplicitConvert();
#endif //C___LEARNING_ADDOPERATORINIMPLICITCONVERT_H
