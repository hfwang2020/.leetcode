/*
 * @lc app=leetcode.cn id=92 lang=cpp
 *
 * [92] 反转链表 II
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

ListNode* successor = nullptr;
class Solution {
public:
    static ListNode* reverseBetween(ListNode* head, int left, int right) {
        int n = right - left + 1;
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* node = dummy;
        while (left) {
            node = node->next;
            left--;
        }
        reverseN(node->next, n);
        return dummy->next;
    }

    
    
    // Reverse the first n nodes of the ListNode
    static ListNode* reverseN(ListNode* head, int n) {
        if (n == 1) {
            successor = head->next;
            return head;
        }
        ListNode* last = reverseN(head->next, n - 1);
        head->next->next = head;
        head->next = successor;
        return last;
    }
};
// @lc code=end

