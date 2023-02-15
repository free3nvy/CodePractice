/*
一圆型游泳池如图所示，现在需在其周围建一圆型过道，并在其四周围上栅栏。栅栏价格为35元/米，过道造价为20元/平方米。
过道宽度为3米，游泳池半径由键盘输入。要求编程计算并输出过道和栅栏的造价。
图形描述：大圆嵌套小圆：
小圆在大圆中间，小圆为游泳池，大圆与小圆间隔为过道。
*/

#include <iostream>
using namespace std;
const float PI = 3.14
const float FencePrice = 35;
const float ConcretePrice = 20;

class Circle{
    private:
        float radius;
    public:
        Circle(float r);
        // 只读函数
        float Circumference() const;
        float Area() const;

};

Circle::Circle(float r){
    radius = r;
}

float Circle::Circumference() const{
    return 2 * PI * radius;
}

// 计算circle面积
float Circle::Circumference() const{
    return PI * radius * radius;
}

int main(){
    return 0;
}

