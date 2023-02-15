
#include<iostream>
using namespace std;
int i=1;  // i 为全局变量，具有静态生存期。

int main(void){
    static int a;
    int b= -10;
    int c = 0;

    void other(void);

    cout << i << a << b << c << endl;
    c += 8;
    other();



}

void other(void){
    static int a = 2;
    static int b;
    int c = 10;

    a = a + 2; i = i + 32; c = c + 5;
    cout << i <<  a<<  b<<  c << endl;
    b = a;
}