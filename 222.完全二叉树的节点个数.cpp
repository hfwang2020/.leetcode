/*
 * @lc app=leetcode.cn id=222 lang=cpp
 *
 * [222] 完全二叉树的节点个数
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
    int reverse(TreeNode* node) {
        if (node == nullptr) {
            return 0;
        }
        int a = reverse(node->left);
        int b = reverse(node->right);
        return a + b + 1;
    }

    int countNodes(TreeNode* root) {
        int a = reverse(root);
        return a;
    }
};
// @lc code=end

