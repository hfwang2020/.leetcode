/*
 * @lc app=leetcode.cn id=101 lang=cpp
 *
 * [101] 对称二叉树
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

class Solution {
public:
    bool compared(TreeNode* l, TreeNode* r) {
        if (l == nullptr && r != nullptr) return false;
        else if (l != nullptr && r == nullptr) return false;
        else if (l == nullptr && r == nullptr) return true;
        else if (l->val != r->val) return false;

        bool a = compared(l->left, r->right);
        bool b = compared(l->right, r->left);
        return a && b;    
    }

    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) return true;
        return compared(root->left, root->right);
    }
};
// @lc code=end

