/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // 以最小的情况 最简单的情况进行递增至复杂情况算法设计
        int len = nums.size();
        int slowPointer = 0;

        for (int i = 0; i < len; i++)
        {
            // 一般性快指针进行判定
            // 慢指针给我指着0！！
            if (nums[i] != 0)
            {
                int tmp = nums[slowPointer];
                nums[slowPointer++] = nums[i]; 
                nums[i] = tmp;
            }
                
            
        }
        

    }
};
// @lc code=end

