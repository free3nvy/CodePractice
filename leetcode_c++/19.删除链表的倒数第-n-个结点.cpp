/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数第 N 个结点
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // 先找nullptr
        // 双指针来搞 减少运行时间 牛逼
        // 链表题 牢记使用dummyptr

        ListNode* dummyptr = new ListNode(0);
        dummyptr->next = head;
        ListNode* slow = dummyptr; 
        ListNode* fast = dummyptr; 

        for (int i = 0; i < n; i++)
        {
            fast = fast->next;
        }

        // 写指针移动逻辑
        while (fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next;
        }

        // 写删除逻辑
        slow->next = slow->next->next;
        return dummyptr->next;

    }
};
// @lc code=end

