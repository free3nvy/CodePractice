/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
// 不要用他们的成员函数 自己实现呗..
// 这个传参是引用 在上面直接进行修改！！
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // 双指针法 一个for循环 通过快慢指针完成想要的效果
        int len = nums.size();
        int slowPointer = 0;

        // 考虑不同的情况咯
        // 无条件俩指针全往前进一步太蠢了 
        for (int i = 0; i < len; i++)
        {
            // 将特殊情况代码化 全方位思考即可 会漏掉连续的情况
            // 你需要对下一个进行检测 显然循环这样不合适
            // 仔细思考反集 可能操作会更简单呢？？
            if (nums[i] != val)
            {
                // 先赋值 再移动指针！
                nums[slowPointer++] = nums[i];
            }
            
        }
        // 不再返回len值 而是慢指针！
        return slowPointer;
        






        // 暴力实现法 老土一点咯
        // int len = nums.size();
        // for (int i = 0; i < len; i++)
        // {
        //     if (nums[i] == val)
        //     {
        //         // 永远多做一点
        //         int j = i;
        //         // 如果下面再有int j 就会覆盖上面的写法咯~
        //         for (; j < len - 1; j++)
        //         {
        //             nums[j] = nums[j + 1];
        //         }
        //         len--;
        //         // 你这样直接边界-1了 不行哦 哦不是的
        //         // 后面返回循环又给他加上1了 是有-1的时候的
        //         // 这一步很关键 同步移动~
        //         i--;
        //     }
            
        // }
        // return len;


        
        


    }
};
// @lc code=end

