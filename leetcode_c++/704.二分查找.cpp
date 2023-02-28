/*
 * @lc app=leetcode.cn id=704 lang=cpp
 *
 * [704] 二分查找
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        // 暴力循环法 hhh
        // for (int i = 0; i < nums.size(); i++)
        // {
        //     if (nums[i] == target)
        //     {
        //         return i;
        //     }
            
        // }
        // return -1;

        // 二分法 以下标为驱动 代码规范无所谓~
        // 不对 应该是以middle为基础来玩的
        int left = 0;
        int right = nums.size();

        while (left < right)
        {
            int middle = (left + right) / 2;
            if (nums[middle] == target)
            {
                return middle;
            }else if (nums[middle] > target)
            {
                // 这里犯错了
                right = middle;
            }else{
                left = middle + 1;
            }
        }
        return -1;
        

        

        

    }
};
// @lc code=end

