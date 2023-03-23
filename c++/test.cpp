/* 到底什么时候会调用拷贝构造函数？ */

/* 明白 初始化 和 赋值 的区别：
    初始化：定义(第一次出现)的同时赋值(也可以不赋值 默认初始化)  只有一次
    赋值：定义完成以后再赋值（不管在定义的时候有没有赋值）就叫做赋值 有多次*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
        // 获取尾部的一个下表
        int i = num1.size() - 1;
        int j = num2.size() - 1;


        // 设置他的进位
        int add = 0;

        string res = "";

        //开始while循环
        while (i >=0 || j >= 0 || add !=0)
        {
            int x , y;
            if (i >= 0)
            {
                x = num1[i] - '0';
            }
            else{
                x = 0;
            }

            if (j >=0)
            {
                y = num2[j] - '0';
            }
            else{
                y = 0;
            }

            int result = x + y + add;
            res += '0' + result % 10;
            add = result / 10;

            i--;
            j--;
            
        }
    reverse(res.begin(), res.end());
    return res;
    }
};


int main()
{
    int record[26] = {0};
    cout << record[4];

    

}
