
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;



// 临时的 没名字 不能取地址
// 右值引用 两个& 牛逼
void print(string&& name){
    cout << name;
}

int main()
{
    // string name = "quchao";
    print("quchao");
    print("jasifojasfiojasoi");

}