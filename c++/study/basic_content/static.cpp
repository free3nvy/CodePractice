#include <string>
#include <iostream>
#include "test.h"

using namespace std;



void demo()
{
    // 因为是静态的 就一块内存空间 有点全局的意思
    static int count = 0;
    cout << count << " ";
    count++;
}


// const char* msgaa = "Hello world\n";

class Apple{

    

    int a;
    public:
        // need init
        static int i;

        // constructor function
        Apple(){
            i = 0;
            cout << "Inside Constructor\n";
            //do nothing
        }
        // destructor function
        ~Apple(){
            cout << "Inside Destructor\n";
        }

        static void printMsg(){
            cout << "welcome to APple!\n";
        }

};

int Apple::i = 2;

int nquchao = 10;
void sayHello();

int main(){
    Apple::printMsg();
    int x = 0;

    
    sayHello();

    if(1){
        // 范围仅在if块内
        Apple obj;

        // destructor after main do
        static Apple obj3;

    }


    for (int i = 0; i < 5; i++)
    {
        demo();
    }
    

    // Apple obj1;
    // Apple obj2;
    // obj1.i = 2;
    // obj1.i = 3;

    // point one memory block
    // cout << obj1.i << " "<< obj2.i <<endl;
    return 0;

    
}