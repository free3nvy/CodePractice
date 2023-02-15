// variables inside a class 

#include<iostream> 
using namespace std; 

class Apple 
{ 
    public: 
        // 类中得静态变量由对象共享
        static int i; 

        Apple() 
        { 
            // Do nothing 
        }; 
}; 

int main() 
{ 
    // 所以不可以有多个副本
    Apple obj1; 
    Apple obj2; 
    obj1.i =2; 
    obj2.i = 3; 

    // prints value of i 
    cout << obj1.i<<" "<<obj2.i; 
} 
