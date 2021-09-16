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
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size1 = nums1.size();
        int size2 = nums2.size();
        int p1 = 0, p2 = 0;
        vector<int> res;
        for (int i = 1; i <= ((size1 + size2) / 2) + 1;i++) {
            p1 = (nums1[p1] < nums2[p2]) ? p1++ : p1;
            p2 = (nums1[p1] >= nums2[p2]) ? p2++ : p2;
            if (p1 == size1) {
                p2++;
                p1--;
            }
            if (p2 == size2) {
                p2--;
                p1++;
            }
            if ((size1 + size2) % 2 == 0) {
                // if i == 
            }
        }


    }
};
// @lc code=end

