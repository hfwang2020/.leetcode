/*
 * @lc app=leetcode.cn id=931 lang=cpp
 *
 * [931] 下降路径最小和
 */

 // @lc code=start

#ifdef LOCAL
#include "header.h"
#endif

class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) {
        if (grid.size() == 0 || grid[0].size() == 0) {
            return 0;
        }
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
                else if (j == col - 1) {
                    dp[i][j] = min(dp[i - 1][j], dp[i - 1][j - 1]) + grid[i][j];
                }
                else {
                    dp[i][j] = min(min(dp[i - 1][j], dp[i - 1][j + 1]), dp[i - 1][j - 1]) + grid[i][j];
                }
            }
        }
        int ret = INT16_MAX;
        for (int i = 0;i < col;i++) {
            ret = min(ret, dp[row - 1][i]);
        }
        return ret;
    }
};
// @lc code=end

