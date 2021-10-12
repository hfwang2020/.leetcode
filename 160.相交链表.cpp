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

#ifdef LOCAL
#include "header.h"
#endif

class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* l1 = headA;
        ListNode* l2 = headB;
        while (l1 != l2) {
            if (l1 == nullptr) {
                l1 = headB;
            }
            else {
                l1 = l1->next;
            }
            if (l2 == nullptr) {
                l2 = headA;
            }
            else {
                l2 = l2->next;
            }
        }
        return l1;
    }
};
// @lc code=end

