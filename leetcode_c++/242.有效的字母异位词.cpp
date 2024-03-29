/*
 * @lc app=leetcode.cn id=242 lang=cpp
 *
 * [242] 有效的字母异位词
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        // 26位数组来做
        int record[26] = {0};

        // 代特殊值去计算边界情况
        for (int i = 0; i < s.size(); i++)
        {
            record[s[i] - 'a']++;

        }

        for (int i = 0; i < t.size(); i++)
        {
            record[t[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++)
        {
            if (record[i] != 0)
            {
                return false;
            }
            
        }

        return true;
        
        

    }
};
// @lc code=end

