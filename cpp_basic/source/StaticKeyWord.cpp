//
// Created by huang aoan on 2022/11/10.
//

namespace cpp_basic{

    // 内部链接
    static int multiply(int a,int b) {
        return a * b;
    }

    int sqrt_using_multiply(int a) {
        return multiply(a, a);
    }
}

