/*
 * @lc app=leetcode.cn id=107 lang=cpp
 *
 * [107] 二叉树的层序遍历 II
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
#include "header.h" 

class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res;
        queue<TreeNode*> que;
        if (root == nullptr) {
            return res;
        }
        que.push(root);
        while (!que.empty()) {
            int size = que.size();
            vector<int> vec;
            for (int i = 0;i < size;i++) {
                TreeNode* temp = que.front();
                que.pop();
                vec.push_back(temp->val);
                if (temp->left) { que.push(temp->left); }
                if (temp->right) { que.push(temp->right); }
            }
            res.push_back(vec);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
// @lc code=end

