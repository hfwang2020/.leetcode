/*
 * @lc app=leetcode.cn id=234 lang=cpp
 *
 * [234] 回文链表
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
    ListNode* left;
    bool isPalindrome(ListNode* head) {
        left = head;
        bool ret = reverse(head);
        return ret;
    }
    bool reverse(ListNode* head) {
        if (head == nullptr) return true;
        bool res = reverse(head->next);
        res = res && (head->val == left->val);
        left = left->next;
        return res;
    }
};
// @lc code=end

