/*
 * @lc app=leetcode.cn id=112 lang=cpp
 *
 * [112] 路径总和
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
    int sum_vec(vector<int>& path) {
        if (path.empty()) return 0;
        int sum = 0;
        for (int i = 0;i < path.size();i++) {
            sum += path[i];
        }
        return sum;
    }

    bool traverse(TreeNode* node, vector<int> &path, int& targetSum) {
        if (node == nullptr) {
            path.push_back(0);
            return false;
        }
        path.push_back(node->val);
        if (node->left == nullptr && node->right == nullptr) {
            if (sum_vec(path) == targetSum) {
                return true;
            }
            else return false;
        }
        bool left = traverse(node->left, path, targetSum);
        path.pop_back();
        bool right = traverse(node->right, path, targetSum);
        path.pop_back();
        return left || right;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        vector<int> path;
        return traverse(root, path, targetSum);
    }
};
// @lc code=end

