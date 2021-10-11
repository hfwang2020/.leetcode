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
#ifdef LOCAL
#include "header.h"
#endif

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* l1 = dummy;
        ListNode* l2 = dummy;
        for (int i = 0;i < n;i++) {
            l2 = l2->next;
        }
        while (l2->next != nullptr) {
            l1 = l1->next;
            l2 = l2->next;
        }
        l1->next = l1->next->next;
        return dummy->next;
    }
};
// @lc code=end

