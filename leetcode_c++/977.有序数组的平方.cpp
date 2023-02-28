/*
 * @lc app=leetcode.cn id=977 lang=cpp
 *
 * [977] 有序数组的平方
 */

// @lc code=start
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // 注意非递减！！那么最大值只可能在边界咯
        // 不看具体代码实现 学习思想再写代码
        // 代码的学习请到具体项目中学习
        // easy...不是传统的快慢指针 只是普通双指针罢了
        // 想用什么直接写 不用include！！
        int len = nums.size();
        vector<int> res(len, 0);
        int left = 0;
        int right = len - 1;

        // 如何处理奇数呢？？
        // 你这逻辑能力算了吧你 不能同步啊 思考为什么会出错 简单条件没有考虑到！！
        for (; left <= right;)
        {
            int a = nums[left] * nums[left];
            int b = nums[right] * nums[right];
            // 问问自己 只有一个的时候符不符合条件 考虑边界值！！
            if (a < b)
            {
                res[--len] = b;
                right--;
            }
            else{
                res[--len] = a;
                left++;
            }
            
        }
        return res;
    }
};
// @lc code=end

