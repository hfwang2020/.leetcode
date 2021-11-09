/*
 * @lc app=leetcode.cn id=25 lang=cpp
 *
 * [25] K 个一组翻转链表
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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head) return nullptr;
        ListNode* a = head;
        ListNode* b = head;
        for (int i = 0;i < k;i++) {
            if (b == nullptr) return head;
            b = b->next;
        }
        ListNode* newHead = reverseK(a, k);
        a->next = reverseKGroup(b, k);
        return newHead;
    }
    // 反转N个数
    ListNode* succ = nullptr;
    ListNode* reverseK(ListNode* head, int k) {
        if (k == 1) {
            succ = head->next;
            return head;
        }
        ListNode* newHead = reverseK(head->next, k - 1);
        head->next->next = head;
        head->next = succ;
        return newHead;
    }
};
// @lc code=end
