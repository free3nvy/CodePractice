// 4为闰年 100年平年 400年闰年

#include<iostream>
using namespace std;

int main(){
    bool result;
    int year;
    cout << " input your year" << endl;
    cin >> year;


    

    //判断 从小到大走 
    if (  (((year % 4) == 0) && ((year % 100) != 0)) || ((year % 400) == 0)){
        cout << "是闰年"<< endl;
    }
    else{
        cout << "不是闰年" <<endl;
    }
    
    

}