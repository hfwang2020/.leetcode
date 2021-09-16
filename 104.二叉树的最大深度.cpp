/*
 * @lc app=leetcode.cn id=104 lang=cpp
 *
 * [104] 二叉树的最大深度
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
    int max_depth = 1;
    void reverse(TreeNode* node, int depth) {
        max_depth = max(depth, max_depth);
        if (node->left != nullptr) reverse(node->left, depth + 1);
        if (node->right != nullptr) reverse(node->right, depth + 1);
    }

    int maxDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        reverse(root, 1);
        return max_depth;
    }
};
// @lc code=end

