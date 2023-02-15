#include <iostream>
using namespace std;

class A{};

class B{
    public:
    char b;
    // 这个东西占用16B
    virtual void func(){};
    static int c;
    static int d;
    static int f;

};

class C{
    // 不管有多少个虚函数，只有一个虚指针,vptr的大小。
    virtual void func(){};
    virtual void func1(){};
    virtual void func2(){};
    virtual void func3(){};

};

int main(){
    // 空类大小为1B
    cout << sizeof(A) << endl;
    cout << sizeof(B) << endl;
    cout << sizeof(C) << endl;
    return 0;
}