/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode();
        ListNode* temp = l3;
        while (l1 != nullptr || l2 != nullptr) {
            if (l1 == nullptr) {
                temp->next = l2;
                l2 = l2->next;
                temp = temp->next;
                continue;
            }
            if (l2 == nullptr) {
                temp->next = l1;
                l1 = l1->next;
                temp = temp->next;
                continue;
            }
            if (l1->val < l2->val) {
                temp->next = l1;
                temp = temp->next;
                l1 = l1->next;
            }
            else {
                temp->next = l2;
                temp = temp->next;
                l2 = l2->next;
            }
        }
        return l3->next;

    }
};
// @lc code=end

