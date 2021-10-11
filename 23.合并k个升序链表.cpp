/*
 * @lc app=leetcode.cn id=23 lang=cpp
 *
 * [23] 合并K个升序链表
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

#include <queue>





class Solution {
public:
    struct Cmp {
        bool operator()(ListNode* a, ListNode* b) {
            return a->val > b->val;
        }
    };
 
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, Cmp> heap;
        // 默认最大堆 重载cmp改为最小堆
        // 参数1表示queue中存储的数据类型
        // 参数2表示queue底层使用的容器,第三个表示自定义的比较参数
        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;

        for (auto i : lists) {
            if (i) {
                heap.push(i);
            }
        }
        while (heap.size()) {
            auto t = heap.top();
            heap.pop();
            tail = tail->next = t;
            if (t->next) {
                heap.push(t->next);
            }
        }
        return dummy->next;

        
    }
};
// @lc code=end

