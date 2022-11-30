//
// Created by huang aoan on 2022/11/29.
//

#ifndef C___LEARNING_ACCESSSPLIT_H
#define C___LEARNING_ACCESSSPLIT_H
class AccessLevels{
public:
    //对只读属性进行只读访问
    int getReadOnly(){ return readOnly; }
    //对读写属性进行读写访问
    void setReadWrite(int val){ readWrite = val; }
    int getReadWrite(){ return readWrite; }
    //对只写属性进行只写访问
    void setWriteOnly(int val){ writeOnly = val; }
private:
    int readOnly; //对外只读访问
    int noAccess; //外部不可访问
    int readWrite; //读写访问
    int writeOnly; //只写访问
};
#endif //C___LEARNING_ACCESSSPLIT_H
