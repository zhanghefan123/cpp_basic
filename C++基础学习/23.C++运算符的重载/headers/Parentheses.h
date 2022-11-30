//
// Created by huang aoan on 2022/11/30.
//

#ifndef C___LEARNING_PARENTHESES_H
#define C___LEARNING_PARENTHESES_H
class Tank{
private:
    int capacity;
public:
    Tank(int capacity):capacity(capacity){
    }
    // 这里加上explicit关键字，就不会进行隐式转换了
    // 否则可以将其直接赋值给我们的tank对象而不需要进行显示的转换
    // 这里的int可以替换为其他基础类型或者类类型
    operator int() const{
        return capacity;
    };
};
void testTank();
#endif //C___LEARNING_PARENTHESES_H
