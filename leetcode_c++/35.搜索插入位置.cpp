/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        // 找他有没有 没有的话最后值进行处理 easy~
        int left = 0;
        int right = nums.size();
        int middle;
        while (left < right)
        {
            int middle = (left + right) / 2;
            if (nums[middle] == target)
            {
                return middle;
            }else if (nums[middle] > target)
            {
                right = middle;
            }else{
                left = middle + 1;
            }

        }
        // 边界思考有问题...
        return right;
        
    }
};
// @lc code=end

