/*
 * @lc app=leetcode.cn id=516 lang=cpp
 *
 * [516] 最长回文子序列
 */

 // @lc code=start

#ifdef LOCAL
#include "header.h"
#endif

class Solution {
public:
    int longestPalindromeSubseq(string s) {
        if (s.size() == 0) return 0;
        int size = s.size();
        vector<vector<int> > dp(size, vector<int>(size));
        for (int i = 0; i < size;i++) {
            dp[i][i] = 1;
        }
        for (int i = size - 1;i >= 0;i--) {
            for (int j = i + 1;j < size;j++) {
                if (s[i] == s[j]) {
                    dp[i][j] = dp[i + 1][j - 1] + 2;
                }
                else {
                    dp[i][j] = max(dp[i][j - 1], dp[i + 1][j]);
                }
            }
        }
        return dp[0][size - 1];
    }
};
// @lc code=end
