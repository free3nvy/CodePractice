#include <iostream>

int main(){
    double obj = 3.14, *pd = &obj;

    void *pv = &obj;
    pv = pd;

    int i = 42;
    int *p1 = &i;
    *p1 = *p1 * *p1;
    

}