#include <string.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N = 5, M = 6;
    // 初值赋0！！！
    vector<vector<int>> obj(N, vector<int>(M));

    //obj.size = 5 行数的意思！！
    for (int i = 0; i < obj.size(); i++)
    {
        for (int j = 0; j < obj[i].size(); j++)
        {
            cout << obj[i][j]<< " ";
        }
        cout << "\n";
        
    }
    
}