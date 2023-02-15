// 内联函数 空间换时间 搞一个圆面积


#include <iostream>
using namespace std;

inline double compute(double);

int main(){
    double r(3);
    double area;
    area = compute(r);

    cout << area<< endl;
    return 0;

    
}

inline double compute(double x){
    double p = 3.14;
    return p*x*x;
}