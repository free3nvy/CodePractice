/*
 * @lc app=leetcode.cn id=342 lang=cpp
 *
 * [342] 4的幂
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfFour(unsigned int n) {
        // 用位来算
        // 0  0
        // 4  100
        // 16 10000
        // 64 1000000
        // 以此类推 后面位数为偶数
        // 思路：判断是否是2的幂指数 不是则false 再判断1是否在奇数位上
        // 
        
        
        if (n & (n - 1))
        {
            return false;
        };


        // 010101010101这种形式~
        if (n & 0x55555555)
        {
            return true;
        };

        return false;
        
        


    }
};
// @lc code=end

