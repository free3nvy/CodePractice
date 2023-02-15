#include <iostream>
using namespace std;

struct test
{
    int a;
    char que;
    char quep[20];
    
};

int main(){
    test t = {5, 'q', "qf"};
    cout << sizeof(t.a) << endl;
    cout << sizeof(t.que) << endl;
    cout << sizeof(t.quep) << endl;
    cout << sizeof(t) << endl;
    system("pause");
    return 0;
}
