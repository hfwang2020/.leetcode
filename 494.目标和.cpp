/*
 * @lc app=leetcode.cn id=494 lang=cpp
 *
 * [494] 目标和
 */

 // @lc code=start

#ifdef LOCAL
#include "header.h"
#endif

class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int ret = 0;
        dfs(nums, 0, 0, target, ret);
        return ret;
    }

    void dfs(vector<int>& nums, int n, int sum, int target, int& ret) {
        if (n == nums.size()) {
            ret += (target == sum) ? 1 : 0;
            return;
        }
        dfs(nums, n + 1, sum + nums[n], target, ret);
        dfs(nums, n + 1, sum - nums[n], target, ret);
    }
};
// @lc code=end

