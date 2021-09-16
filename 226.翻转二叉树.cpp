/*
 * @lc app=leetcode.cn id=226 lang=cpp
 *
 * [226] 翻转二叉树
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
    void reverse(TreeNode* root) {
        if (root == nullptr) return;
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;
        reverse(root->left);
        reverse(root->right);
    }

    TreeNode* invertTree(TreeNode* root) {
        reverse(root);
        return root;
    }
};
// @lc code=end

