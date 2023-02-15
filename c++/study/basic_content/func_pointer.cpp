#include<iostream>
using namespace std;

void (*pFun)(int);

// 声明一个void(*)()类型的函数指针
typedef void (*func)(void);

void myfunc(void){
    cout << "asda" << endl;
}

void glFun(int a){ cout<< a << endl;}

int main(){
    // 函数指针应用
    func pfun = myfunc;
    pfun();
    pFun = glFun;
    (*pFun)(2);


}
