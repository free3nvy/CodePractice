/*
 * @lc app=leetcode.cn id=541 lang=cpp
 *
 * [541] 反转字符串 II
 */

// @lc code=start
class Solution {
public:
    string reverseStr(string s, int k) {
        // 分析有几种情况
        // 每一个循环去处理一个block
        // 让i去进行变动 可能效果会更好一些？？
        // for (int i = 0; i < (s.size() / (2 * k)) + 1; i++)
        for (int i = 0; i < s.size(); i = i + k * 2)
        {
            // 局部反轉 
            if (i + k <= s.size())
            {
                reverse(s.begin() + i, s.begin() + i + k);
            }
            // 全部反轉 
            else{
                reverse(s.begin() + i, s.end());
                
            };
            
        }
        return s;
        

    }
};
// @lc code=end

