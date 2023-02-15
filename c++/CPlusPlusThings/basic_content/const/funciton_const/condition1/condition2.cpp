#include<iostream>
using namespace std;


int main(){
    const int p = 10;
    // 因为p是个常量 所以vp指针也得是个常量
    const void *vp = &p;
    // void *vp1 = &p; //error
}
