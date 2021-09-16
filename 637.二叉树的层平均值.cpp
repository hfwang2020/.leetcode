/*
 * @lc app=leetcode.cn id=637 lang=cpp
 *
 * [637] 二叉树的层平均值
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

// #include "header.h"

class Solution {
public:
    double mean(vector<int>& a) {
        double sum = 0;
        for (auto i : a) {
            sum += i;
        }
        return sum/a.size();
    }

    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        if (root == nullptr) { return res; }
        queue<TreeNode*> que;
        que.push(root);
        while (!que.empty()) {
            vector<int> temp;
            int size = que.size();
            
            for (int i = 0;i < size;i++) {
                TreeNode* a = que.front();
                que.pop();
                temp.push_back(a->val);
                if (a->left) que.push(a->left);
                if (a->right) que.push(a->right);
            }
            res.push_back(mean(temp));
        }
        return res;
    }
};
// @lc code=end

