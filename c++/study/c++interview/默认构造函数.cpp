
#include <iostream>
using namespace std;

struct Point{    
    // 默认构造函数？？？
    // Point()=default;
    Point(int _x, int _y):x(_x),y(_y){}
    int x = 0;
    int y = 0;
};


int main(){
    Point p(8,99);
}