/*
 * @lc app=leetcode.cn id=151 lang=cpp
 *
 * [151] 反转字符串中的单词
 */

// @lc code=start
class Solution {
public:

    // 写点子逻辑模块
    void reverse(string& s, int start, int end)
    {
        while (start < end)
        {
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }

    void dealspace(string& s)
    {
        // 找尾部 如何判断呢？？ 直接用size来判断
        // 快慢指针了阿
        int slow = 0;
        // i 为快指针
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ' ')
            {
                if (slow != 0)
                {
                    s[slow++] = ' ';
                }
                while (i < s.size() && s[i] != ' ')
                {
                // 下面的i是在变动的噢
                    s[slow++] = s[i++];
                }
            }
        }
        s.resize(slow);
        
    }

    string reverseWords(string s) {
        dealspace(s);
        
        // 处理完毕

        reverse(s, 0, s.size() - 1);

        int start = 0;
        // 在逆转里面进行逆转 得到最终输出
        // 已经做好初始形态了
        for (int i = 0; i <= s.size(); i++)
        {
            // 前面是最后一个单词的翻转
            if (i == s.size() || s[i] == ' ')
            {
                reverse(s, start, i - 1);
                start = i + 1;
            }
            
        }
        return s;

    }
};
// @lc code=end

