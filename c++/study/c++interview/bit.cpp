#include <iostream>
// #include <ctime>
 
using namespace std;
 
int main( )
{
    //获取当前时间
    //  按位与 两者同为1 取1
    int a = 10 & 5;
    cout << a;


    // 按位或
    int b = 10 | 5;
    cout << b;

    // 异或 不同则为1 同 则为0
    int c = 10 ^ 5;
    cout << c;

    int d = 10 >> 1;
    cout << "!!!" << d;

}