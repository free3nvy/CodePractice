// #define NDEBUG          // 加上这行，则 assert 不可用
#include <assert.h>


int main()
{
    int a = 10;
    int &b = a;
    b = 20;

    // 这样不行 无法对立即数取值
    // int var& = 10;

    // 内存里临时变量保存了个10
    const int& var1 = 10;

    int&& var2 = 10;

}