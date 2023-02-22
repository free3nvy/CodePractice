#include<iostream>

using namespace std;

// 一个时刻只有一个变量有值
union UnionTest {
    UnionTest() : i(10) {};
    int i;
    double d;
};

// 全局匿名函数
static union {
    int i;
    double d;
};

int main() {
    UnionTest u;


    // 局部匿名（没有设置名字）
    union {
        int i;
        double d;
    };

    std::cout << u.i << std::endl;  // 输出 UnionTest 联合的 10
    std::cout << u.d << std::endl;  // 输出 UnionTest 联合的 10

    ::i = 20;
    std::cout << ::i << std::endl;  // 输出全局静态匿名联合的 20

    i = 30;
    std::cout << i << std::endl;    // 输出局部匿名联合的 30
    d = 30.1;
    std::cout << i << std::endl;    // 输出局部匿名联合的 30
    std::cout << d << std::endl;    // 输出局部匿名联合的 30

    return 0;
}