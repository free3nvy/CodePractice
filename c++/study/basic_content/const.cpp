#include <iostream>
#include "test.h"
using namespace std;


void f(const int a){
        // const被保护 所以不能这么搞
        // a++;
    };

extern const int quchao; 

class Apple{
private:
    int people[100];
public:
    Apple(int i); 
    const int apple_number;
};

Apple::Apple(int i):apple_number(i)
{

}

int main(){


    const int num1 = 0;
    const int * const ptr4 = &num1; //指针是个常量 num1也是个常量 可以前面加个const
    cout << *ptr4 << endl;

    

    int num = 0;
    int * const ptr2 = &num;
    int * t = &num;
    *t = 1;
    cout << *ptr2 << endl;

    const char * a1;  // a1是个常量了
    char const * a;
    // 下面指针是常量
    char * const ab = 0;
    // const char * const a;

    // *a1 = 10;

    const int p = 10;
    const void * vp = &p; //保存地址 因为后面是个const 所以你也得是个const！！
    // void * vp = &p; //后面是个const 你怎么能不是个const呢！！

    const int * ptr; //指针指向得是个常量 而非指针本身是常量
    int val = 3;
    ptr = &val;
    int val1 = 4;
    ptr = &val1;
    cout << *ptr << endl;
    int * ptr1 = &val;
    *ptr1 = 5;
    cout << *ptr1 << endl;
    

    const int i = 0,j = 0;

    cout<<quchao<<endl;
    const int abc = 100;
    
    f(4);

    return 0;
}