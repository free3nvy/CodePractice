#include <iostream>
#include <cstdarg>

using namespace std;

void sum(int n, ...){
   va_list args1;
   va_start(args1, n);

   while (n--)
   {
      cout << va_arg(args1, int);
   }
   va_end(args1);
   
}

int main(){
   sum(4,1,2,3,4);
}