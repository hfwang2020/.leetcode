/*
 * @lc app=leetcode.cn id=572 lang=cpp
 *
 * [572] 另一棵树的子树
 */

 // @lc code=start
 /**
  * Definition for a binary tree node.
  * struct TreeNode {
  *     int val;
  *     TreeNode *left;
  *     TreeNode *right;
  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  * };
  */

#ifdef LOCAL
#include "header.h"
#endif
  // 110/182
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q == nullptr) return true;
        else if (p != nullptr && q == nullptr) return false;
        else if (q != nullptr && p == nullptr) return false;
        else if (q->val != p->val) return false;
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (root == nullptr) return false;
        bool a = isSubtree(root->left, subRoot);
        bool b = isSubtree(root->right, subRoot);
        return isSameTree(root, subRoot) || a || b;
    }
};
// @lc code=end

