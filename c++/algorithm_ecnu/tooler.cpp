#include <iostream>
#include <vector>
#include <stack>
using namespace std;


// 主函数
int main()
{
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(0);

    long long total_1 = 0;
    long long n_1;
    cin>>n_1;
    vector<long long> sal_1(n_1,0);
    bool iszero_1 = 0;
    for(long long i_1 = 0; i_1< n_1; ++i_1)
    {
        cin>>sal_1[i_1];
        total_1 += sal_1[i_1];
    }
    long long av_1 = total_1 / n_1;

    if(total_1 % n_1 != 0)
    {
        cout<<"-1";
        return 0;
    }
    long long pos_max_1 = 0;
    long long neg_max_1 = 0;
    long long cnt_1 = 0;
    for(long long i_1 = 0; i_1< n_1; ++i_1)
    {
        sal_1[i_1] -= av_1;
        cnt_1 += sal_1[i_1];
        pos_max_1 = max(pos_max_1,cnt_1);
        neg_max_1 = min(neg_max_1,cnt_1);
    }
    cout<<abs(pos_max_1) + abs(neg_max_1);
    return 0; 
}