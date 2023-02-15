#include <iostream>

using namespace std;

extern "C" {
    #include "extern.h"
}

// 调用C语言函数 首先gcc（这是一个c语言的编译器）去生成中间文件
int main(){
    cout << add(2,5);
    return 0;
}