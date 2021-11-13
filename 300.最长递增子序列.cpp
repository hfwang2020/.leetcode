/*
 * @lc app=leetcode.cn id=300 lang=cpp
 *
 * [300] 最长递增子序列
 */

 // @lc code=start

#ifdef LOCAL
#include "header.h"
#endif

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp(nums.size(), 1);
        for (int i = 0;i < nums.size();i++) {
            for (int j = 0; j < i;j++) {
                if (nums[j] < nums[i]) {
                    dp[i] = max(dp[j] + 1, dp[i]);
                }
            }
        }
        int ret = INT16_MIN;
        for (int i = 0;i < nums.size();i++) {
            ret = max(dp[i], ret);
        }
        return ret;
    }
};
// @lc code=end

