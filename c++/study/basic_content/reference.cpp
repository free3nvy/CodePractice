#include <iostream>

int main(){
    int ival = 1.01;
    int &rval1 = ival;
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;
    r2 = 3.14;
    r2 = r1;
    i = r2;
    r1 = d;


    return 0;
}