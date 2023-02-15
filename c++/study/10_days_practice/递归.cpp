// 用递归实现累乘

#include<iostream>
using namespace std;

int f(int n);
int main(){

    cout << f(5) << endl;
    

}


int f(int n){
    if (n == 0)
    {   
        return 1;
    }
    else{
        return n*f(n - 1);
    }
    
}