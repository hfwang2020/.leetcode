/*
 * @lc app=leetcode.cn id=416 lang=cpp
 *
 * [416] 分割等和子集
 *
 *  思路: 将数组求和转化为 子集和为一半总和的问题
 *
 */

 // @lc code=start
class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for (auto i = 0; i < nums.size();i++) {
            sum += nums[i];
        }
        if (sum % 2 != 0)  return false;
        int sz = nums.size();
        vector<vector<bool>> dp(sz + 1, vector<bool>(sum / 2 + 1, false));
        for (int i = 0; i <= sz; i++) {
            dp[i][0] = true;
        }
        for (int i = 1;i <= sz;i++) {
            for (int j = 1;j <= nums / 2;j++) {
                if (j < nums[i - 1]) {
                    dp[i][j] = dp[i - 1][j];
                }
                else {
                    dp[i][j] = dp[i - 1][j] || dp[i - 1][j - nums[i - 1]];
                }
            }
        }
        return dp[sz][sum / 2];
    }
};
// @lc code=end

