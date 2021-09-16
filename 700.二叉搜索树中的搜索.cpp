/*
 * @Author: your name
 * @Date: 2021-09-07 19:43:14
 * @LastEditTime: 2021-09-07 19:57:42
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /.leetcode/700.二叉搜索树中的搜索.cpp
 */
/*
 * @lc app=leetcode.cn id=700 lang=cpp
 *
 * [700] 二叉搜索树中的搜索
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

    TreeNode* searchBST(TreeNode* root, int val) {
        if (root == nullptr || root->val == val) {
            return root;
        }
        if (root->val < val) {
            return searchBST(root->right, val);
        }
        else {
            return searchBST(root->left, val);
        }
        // return nullptr;
    }
};
// @lc code=end

