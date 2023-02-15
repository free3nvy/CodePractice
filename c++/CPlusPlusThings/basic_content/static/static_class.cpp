#include<iostream> 
using namespace std; 

class Apple 
{ 
    int i; 
    public: 
    Apple() 
    { 
        i = 0; 
        cout << "Inside Constructor\n"; 
    } 
    ~Apple() 
    { 
        cout << "Inside Destructor\n"; 
    } 
}; 

int main() 
{ 
    int x = 0; 
    if (x==0) 
    { 
        // 静态会如何调用？ 静态得话 main函数结束再进行销毁。。。
        static Apple obj; 
    } 
    cout << "End of main\n"; 
} 

