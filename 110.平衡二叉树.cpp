/*
 * @lc app=leetcode.cn id=110 lang=cpp
 *
 * [110] 平衡二叉树
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

    bool flag = true;
    int traverse(TreeNode* node) {
        if (node == nullptr) return 0;
        int left = 1 + traverse(node->left);
        int right = 1 + traverse(node->right);
        if (abs(left - right) >= 2) flag = false;
        return max(left, right);
    }

    bool isBalanced(TreeNode* root) {
        traverse(root);
        return flag;
    }
};
// @lc code=end

