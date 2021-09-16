/*
 * @lc app=leetcode.cn id=106 lang=cpp
 *
 * [106] 从中序与后序遍历序列构造二叉树
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
    TreeNode* build(vector<int>& inorder, vector<int>& postorder) {
        if (inorder.size() == 0) {
            return nullptr;
        }
        if (inorder.size() == 1) {
            return new TreeNode(inorder[0]);
        }
        int index, root_val = postorder[postorder.size() - 1];
        TreeNode* root = new TreeNode(root_val);
        for (int i = 0;i < inorder.size();i++) {
            if (inorder[i] == root_val) {
                index = i;
                break;
            }
        }
        postorder.resize(postorder.size() - 1);
        vector<int> left_inorder(inorder.begin(), inorder.begin() + index);
        vector<int> right_inorder(inorder.begin() + index + 1, inorder.end());
        vector<int> left_postorder(postorder.begin(), postorder.begin() + left_inorder.size());
        vector<int> right_postorder(postorder.begin() + left_inorder.size(), postorder.end());
        root->left = buildTree(left_inorder, left_postorder);
        root->right = buildTree(right_inorder, right_postorder);
        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return build(inorder, postorder);
    }

};
// @lc code=end

