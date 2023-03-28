/*
 * @lc app=leetcode.cn id=142 lang=cpp
 *
 * [142] 环形链表 II
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
    ListNode *detectCycle(ListNode *head) {
        // 用快慢指针来判定环结构
        // 在相遇节点和起始节点同时往前走 相遇即可找到入口节点
        // 都是套路

        ListNode* dummyPtr = new ListNode(0);
        ListNode* slow = dummyPtr;
        ListNode* fast = dummyPtr;
        dummyPtr->next = head;

        // 判断有没有环
        // 想想终止条件 下一个是nullptr  或者找到了重合 则quit
        // 想一下他的逻辑 这个是对的咯
        // 先走再说 可你一开始是重合得啊 得考虑边界情况得咯
        while (fast != nullptr && fast->next != nullptr )
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
            {
            // 有环
            ListNode* first = dummyPtr;
            ListNode* second = slow;
            while (first != second)
            {
                first = first->next;
                second = second->next;

            }
            return first;
            }
            
        }

        return NULL;

        
        
        // 有环则继续走 没环则返回-1

        
    }
};
// @lc code=end

