#include <string>
#include <vector>
#include <queue>
#include <algorithm>
// 一个包含所有std的头文件
// #include <bits/stdc++.h>
using namespace std;

// Definition for singly - linked list.



struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};


struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}

};



// list vector<vector<int>>
// void showVec(vector<vector<int>>& v) {
//     int size = v.size();
//     cout << "[ " << endl;
//     for (int i = 0; i < size; i++) {
//         int sSize = v[i].size();
//         cout << "[";
//         for (int j = 0;j < sSize; j++) {
//             if (j != sSize - 1) {
//                 cout << v[i][j] << ",";
//             }
//             else {
//                 cout << v[i][j];
//             }
//         }
//         cout << "]" << endl;
//     }
//     cout << "]" << endl;
// }

// trans num_string to int
// int sToi(string s) {
//     return atoi(s.c_str());
// }

// string str = "1,2,3,null,null,4,5";
// TreeNode *root = new TreeNode();
// getTreeNode(str, root);
// cout << root->val << endl;

// void getTreeNode(string str, TreeNode* root) {
//     vector<string> v;
//     stringstream sstr(str);
//     string buf;
//     while (getline(sstr, buf, ',')) {
//         // cout << buf << endl;
//         v.push_back(buf);
//     }
//     if (v[0] == "null") return;
//     root->val = sToi(v[0]);
//     queue<TreeNode*> que;
//     que.push(root);
//     int p = 1;
//     while (!que.empty() && p < v.size()) {
//         int size = que.size();
//         // cout << "size:" << size << endl;
//         for (int i = 0; i < size; i++) {
//             TreeNode* temp = que.front();
//             que.pop();
//             if (v[p] != "null") {
//                 temp->left = new TreeNode(sToi(v[p]));
//                 que.push(temp->left);
//             }
//             p++;
//             if (v[p] != "null") {
//                 temp->right = new TreeNode(sToi(v[p]));
//                 que.push(temp->right);
//             }
//             p++;
//         }
//     }
// }


void printListNode(ListNode* head) {
    while (head != nullptr) {  
        cout << head->val << endl;
        head = head->next;
    }
}