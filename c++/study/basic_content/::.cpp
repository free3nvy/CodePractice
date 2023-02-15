#include <iostream>
using namespace std;

int count = 0;

class A {
    public:
        static int count;
};

int A::count;
int main(){
    ::count = 1;
    A::count = 5;
    cout << A::count << endl;
    return 0;
}