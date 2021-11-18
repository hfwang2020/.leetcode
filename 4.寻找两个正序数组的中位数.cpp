/*
 * @lc app=leetcode.cn id=4 lang=cpp
 *
 * [4] 寻找两个正序数组的中位数
 */
 // @lc code=start
#ifdef LOCAL
#include "header.h"
#endif

class Solution {
public:
    int getKthElement(const vector<int>& num1, const vector<int>& num2, int k) {
        int m = num1.size();
        int n = num2.size();
        int index1 = 0, index2 = 0;
        while (true) {
            if (index1 == m) {
                return nums2[index2+k+1];
            }
            if (index2 == n) {
                return nums1[index1+k+1];
            }
            if (k == 1) {
                return min(num1[index1], nums2[index2]);
            }
            // 
            int newIndex1 = min()
        }

    }


    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {


    }
};
// @lc code=end

