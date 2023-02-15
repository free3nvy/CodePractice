#include<iostream>

using namespace std;
struct stuff 
{
    // 总共有三块 3*32=96
    unsigned int field1: 30;
    // 未命名得位域 起填充作用 没别的用处
    // unsigned int 反正就32位的位子 多了往下
    // 空的是为了补空隙
    unsigned int       : 2;
    unsigned int field2: 4;
    unsigned int       : 0;
    unsigned int field3: 3; 
};
int main(){
    struct stuff s={99,50,5};
    cout<<s.field1<<endl;
    // 第二个只有4位 是不能放50的 已经越界了
    cout<<s.field2<<endl;
    cout<<s.field3<<endl;
    cout<<sizeof(s)<<endl;
    return 0;
}
