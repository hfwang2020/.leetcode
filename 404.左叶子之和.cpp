/*
 * @lc app=leetcode.cn id=404 lang=cpp
 *
 * [404] 左叶子之和
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

    void traverse(TreeNode* cur, TreeNode* parent, int& sum) {
        if (parent != nullptr && cur->left == nullptr && cur->right == nullptr && parent->left == cur) {
            sum += cur->val;
        }
        if (cur->left) {
            traverse(cur->left, cur, sum);
        }
        if (cur->right) {
            traverse(cur->right, cur, sum);
        }
    }

    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        if (root == nullptr) return sum;
        traverse(root, nullptr, sum);
        return sum;
    }
};
// @lc code=end

