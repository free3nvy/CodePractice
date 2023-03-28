/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
<<<<<<< HEAD
=======
        // 首先排序
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        // 去重 应该在循环里面去重
        for (int i = 0; i < nums.size() ; i++)
        {
            // 如果第一个大于0 那一定不可能 直接出来了
            if (nums[i] > 0)
            {
                return result;
            }

            // 去重 从后往前
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }

            int left = i + 1;
            int right = nums.size() - 1;
            while (left < right)
            {
                // 写双指针逻辑
                int res = nums[i] + nums[left] + nums[right];
                if (res > 0)
                {
                    right--;
                }else if (res < 0)
                {
                    left++;
                }else{
                    result.push_back(vector<int>{nums[i], nums[left], nums[right]});
                    while(right > left && nums[left] == nums[left + 1]) left++;
                    while(right > left && nums[right] == nums[right - 1]) right--;

                    left++;
                    right--;
                }
                
            }
            
        }
        return result;
        
>>>>>>> refs/remotes/origin/main

    }
};
// @lc code=end

