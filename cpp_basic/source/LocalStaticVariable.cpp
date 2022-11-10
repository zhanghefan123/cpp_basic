//
// Created by huang aoan on 2022/11/10.
//
# include <iostream>
namespace cpp_basic {
    int testLocalStaticVariable()
    {
        static int b = 1;
        return b++;
    }
}