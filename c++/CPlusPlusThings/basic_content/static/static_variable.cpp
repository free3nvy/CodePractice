// variables inside a class 

#include<iostream> 
using namespace std; 

class GfG 
{ 
    public: 
        static int i; 

        GfG() 
        { 
            // Do nothing 
        }; 
}; 

// 所以说 类的静态变量只能有一个副本
// int GfG::i = 1; 
int GfG::i = 2; 

int main() 
{ 
    GfG obj; 
    // prints value of i 
    cout << obj.i; 
} 
