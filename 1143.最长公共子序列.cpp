/*
 * @lc app=leetcode.cn id=1143 lang=cpp
 *
 * [1143] 最长公共子序列
 */

 // @lc code=start

#ifdef LOCAL
#include "header.h"
#endif


class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int s1 = text1.length();
        int s2 = text2.length();
        vector<vector<int>> dp(s1 + 1, vector<int>(s2 + 1));
        for (int i = 1; i <= text1.length(); i++) {
            for (int j = 1; j <= text2.length(); j++) {
                if (text1[i-1] == text2[j-1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                }
                else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        return dp[s1][s2];
    }
};
// @lc code=end

