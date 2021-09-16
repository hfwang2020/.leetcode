/*
 * @lc app=leetcode.cn id=113 lang=cpp
 *
 * [113] 路径总和 II
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

    static int sum_vec(vector<int>& path) {
        if (path.empty()) return 0;
        int sum = 0;
        for (int i = 0;i < path.size();i++) {
            sum += path[i];
        }
        return sum;
    }

    static void traverse(TreeNode* node, vector<int>& path, vector<vector<int>>& res, const int& targetSum) {
        if (node == nullptr) {
            path.push_back(0);
            return;
        }
        path.push_back(node->val);
        if (node->left == nullptr && node->right == nullptr) {
            if (sum_vec(path) == targetSum) {
                res.push_back(path);
            }
            return;
        }
        traverse(node->left, path, res, targetSum);
        path.pop_back();
        traverse(node->right, path, res, targetSum);
        path.pop_back();
    }

    static vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> path;
        vector <vector<int>> res;
        traverse(root, path, res, targetSum);
        return res;
    }

};
// @lc code=end

