/*
 * @lc app=leetcode.cn id=209 lang=cpp
 *
 * [209] 长度最小的子数组
 */

// @lc code=start
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        // 先思考好该设定哪一些的初值？？
        
        // 搞一个不可能的最大值咯
        int result = INT32_MAX;
        int sum = 0; // 窗口数值和
        int start = 0;
        int length = 0;


        for (int j = 0; j < nums.size(); j++)
        {
            sum += nums[j];
            
            // 核心逻辑咯
            while (sum >= target)
            {
                // 应该放一个最大的value
                // 巧用三元运算符
                length = j - start + 1;
                result = result < length? result : length;
                
                sum = sum - nums[start]; 
                start++;
            }
            
        }

        return result == INT32_MAX? 0 : result; 
        

    }
};
// @lc code=end

