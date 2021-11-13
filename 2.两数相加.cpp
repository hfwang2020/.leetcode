// #include "header.h"

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode(0);
        ListNode* cur = result;
        int carry = 0;
        while (l1 || l2) {
            int n1 = l1 ? l1->val : 0;
            int n2 = l2 ? l2->val : 0;
            int sum = n1 + n2 + carry;
            if (sum >= 10) {
                carry = 1;
                sum = sum % 10;
            }
            else {
                carry = 0;
            }
            cur->next = new ListNode(sum);
            cur = cur->next;
            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }
        if (carry > 0) {
            cur->next = new ListNode(carry);
        }
        return result->next;

    }
};

// @lc code=end