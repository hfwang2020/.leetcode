/*
 * @lc app=leetcode.cn id=102 lang=cpp
 *
 * [102] 二叉树的层序遍历
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> que;
        if (root != nullptr) que.push(root);
        vector<vector<int>> result;
        while (!que.empty()) {
            int size = que.size();
            vector<int> vec;
            for (int i = 0;i < size;i++) {
                TreeNode* a = que.front();
                que.pop();
                vec.push_back(a->val);
                if(a->left) que.push(a->left);
                if(a->right) que.push(a->right);
            }
            result.push_back(vec);
        }
        return result;
    }
};
// @lc code=end

