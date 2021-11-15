/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */

 // @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.size() == 1) {
            return nums[0];
        }
        vector<int> dp(nums.size(), 0);
        dp[0] = nums[0];
        for (int i = 1; i < nums.size() ;i++) {
            dp[i] = max(dp[i - 1] + nums[i], nums[i]);
        }
        return *max_element(dp.begin(), dp.end());
    }
};
// @lc code=end

