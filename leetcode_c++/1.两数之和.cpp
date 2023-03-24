/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // 用hashmap来做
        unordered_map <int, int> map;
        
        for (int i = 0; i < nums.size(); i++)
        {

            // 一定有答案得 所以。。
            if (nums[i] > target)
            {
                continue;
            }

            int other = target - nums[i]

            // 去hashmap里面去找
            int map.find(other);

        }
        
        
        

        
        
    }
};
// @lc code=end

