/*
 * @lc app=leetcode.cn id=160 lang=cpp
 *
 * [160] 相交链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // 尾部判定函数
        int len_a = 1;
        int len_b = 1;
        int difference;

        
        // 尾部循环退出条件
        while (headA->next != nullptr)
        {
            len_a++;
        }

        while (headB->next != nullptr)
        {
            len_b++;
        }

        if (a > b)
        {
            difference = a - b;
            for (; i < difference; i++)
            {
                headA = headA->next;
            }
        }
        else{
            difference = b - a;
            for (; i < difference; i++)
            {
                headB = headB->next;
            }
        }

        // 以上链表首指针移动完毕 开始判断

        while (headA->next != nullptr)
        {
            if (headA->val == headB->val)
            {
                /* code */
            }
            
        }
        
        
        
        
        
    }
};
// @lc code=end

