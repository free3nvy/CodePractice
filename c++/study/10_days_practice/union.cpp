//union里面存储了各种不同的类型
// union只有一个成员 长度为最长
// struct 长度为所有成员总和

#include <iostream>
using namespace std;

union jasiofjasfoisaj
{
    int k;
    struct ajfiofajof
    {
        // 如何修改上方k 则会覆盖这边的x
        int x;
        int y;
        int z;
    }s;
    
}u;



int main(){
    u.s.x = 1;
    u.s.y = 2;
    u.s.z = 3;
    cout << u.s.z;
    u.k = 0;
    cout << u.s.x;
    cout << u.s.y;
}