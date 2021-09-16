
#include <iostream>
#include <queue>
#include <sstream>
#include <string>
#include <vector>
#include "header.h"
using namespace std;

#include "113.路径总和-ii.cpp"


void traverse(TreeNode* node) {
    if (node == nullptr) {
        cout << "null ";
        return;
    }
    cout << node->val << " ";
    traverse(node->left);
    traverse(node->right);
    return;
}

int main(signed argc, char const* argv[]) {
    //===================main scope========================
    string str = "5,4,8,11,null,13,4,7,2,null,null,5,1";
    TreeNode *root = new TreeNode();
    getTreeNode(str, root);
    
    // traverse(root);
    
    vector<vector<int>> vec;
    vec = Solution::pathSum(root, 22);
    
    showVec(vec);
}