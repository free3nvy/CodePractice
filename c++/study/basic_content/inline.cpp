#include <iostream>
#include "test.h"

using namespace std;

int Foo(int x, int y);
inline int Foo(int x, int y)
{
    return x+y;
}

inline void inlinea::f1(int x){

}

int main(){
    cout << Foo(3, 4) << endl;
    return 0;
}
