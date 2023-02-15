// the use of static Static 
// variables in a Function 
#include <iostream> 
#include <string> 
using namespace std; 

void demo() 
{ 
    // static variable 
    // 静态变量可以修改 但是const常量就不能修改了！！
    static int count = 0; 
    cout << count << " "; 

    // value is updated and 
    // will be carried to next 
    // function calls 
    count++; 
} 

int main() 
{ 
    for (int i=0; i<5; i++)  
        demo(); 
    return 0; 
} 
