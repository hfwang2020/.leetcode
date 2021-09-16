/*
 * @lc app=leetcode.cn id=111 lang=cpp
 *
 * [111] 二叉树的最小深度
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
    int mindepth = INT32_MAX;
    void reverse(TreeNode* root, int depth) {
        if (root->left == nullptr && root->right == nullptr)
            mindepth = min(mindepth, depth);
        if (root->left != nullptr) reverse(root->left, depth + 1);
        if (root->right != nullptr) reverse(root->right, depth + 1);
    }

    int minDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        reverse(root, 1);
        return mindepth;
        
    }
};
// @lc code=end

