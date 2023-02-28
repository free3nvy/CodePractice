/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // 题目很友善 是个递增或者持平的序列哦 有一个tmp值放着咯
        // 用快慢指针
        // 往后面比咯
        // 能做多做原则 可以将双指针位置重新考虑一下
        int len = nums.size();
        int slowPointer = 0;
        for (int i = 0; i < len; i++)
        {
            if (nums[i] != nums[i + 1])
            {
                nums[slowPointer++] = nums[i];
            }else{
                nums[]
            }
            

        }
        return slowPointer;
        

    }
};
// @lc code=end

