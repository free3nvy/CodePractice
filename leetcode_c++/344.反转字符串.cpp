/*
 * @lc app=leetcode.cn id=344 lang=cpp
 *
 * [344] 反转字符串
 */

// @lc code=start
class Solution {
public:
    void reverseString(vector<char>& s) {
        // 没有额外的空间复杂度
        // 如何定义指针呢？？
        // 狗屁指针 只是下标罢了

        for (int i = 0; i < s.size() / 2; i++)
        {
            // char tmp = s[i];
            // s[i] = s[s.size() - i - 1];
            // s[s.size() - i - 1] = tmp;
            swap(s[i], s[s.size() - i - 1]);
        }
        


    }
};
// @lc code=end

