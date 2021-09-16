/*
 * @Author: your name
 * @Date: 2021-09-07 16:05:53
 * @LastEditTime: 2021-09-07 16:52:41
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /.leetcode/617.合并二叉树.cpp
 */
 /*
  * @lc app=leetcode.cn id=617 lang=cpp
  *
  * [617] 合并二叉树
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
    void traverse(TreeNode* mynode, TreeNode* root1, TreeNode* root2) {
        if (root1 == nullptr && root2 == nullptr) {
            return;
        }
        int val1 = (root1) ? root1->val : 0;
        int val2 = (root2) ? root2->val : 0;
        mynode->val = val1 + val2;

        TreeNode* left1 = (root1) ? root1->left : nullptr;
        TreeNode* left2 = (root2) ? root2->left : nullptr;
        if (left1 || left2) {
            mynode->left = new TreeNode();
            traverse(mynode->left, left1, left2);
        }


        TreeNode* right1 = (root1) ? root1->right : nullptr;
        TreeNode* right2 = (root2) ? root2->right : nullptr;
        if (right1 || right2) {
            mynode->right = new TreeNode();
            traverse(mynode->right, right1, right2);
        }

    }


    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if (root1 == nullptr && root2 == nullptr) {
            return nullptr;
        }
        TreeNode* node = new TreeNode();
        traverse(node, root1, root2);
        return node;
    }
};
// @lc code=end

