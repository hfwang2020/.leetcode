/*
 * @lc app=leetcode.cn id=64 lang=cpp
 *
 * [64] 最小路径和
 */

 // @lc code=start

#ifdef LOCAL
#include "header.h"
#endif


class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<int>> dp(row, vector<int>(col));
        for (int i = 0;i < col;i++) {
            dp[0][i] = grid[0][i];
        }
        for (int i = 1;i < row;i++) {
            for (int j = 0;j < col;j++) {
                if (j == 0) {
                    dp[i][j] = min(dp[i - 1][j], dp[i - 1][j + 1]) + grid[i][j];
                }
                if (j == col - 1) {
                    dp[i][j] = min(dp[i - 1][j], dp[i - 1][j - 1]) + grid[i][j];
                }
                dp[i][j] = min(min(dp[i - 1][j], dp[i - 1][j + 1]), dp[i - 1][j - 1]) + grid[i][j];
            }
        }
        int ret = INT32_MAX;
        for (int i = 0;i < col;i++) {
            ret = min(ret, dp[row - 1][i]);
        }
        return ret;
    }

};
// @lc code=end

