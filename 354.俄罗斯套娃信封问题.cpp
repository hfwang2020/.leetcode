/*
 * @lc app=leetcode.cn id=354 lang=cpp
 *
 * [354] 俄罗斯套娃信封问题
 */

 // @lc code=start

#ifdef LOCAL
#include "header.h"
#endif

class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        if (envelopes.empty()) {
            return 0;
        }
        int n = envelopes.size();
        sort(envelopes.begin(), envelopes.end(), [](const auto& a, const auto& b) {return a[0] < b[0] || (a[0] == b[0] && a[1] > b[1]);});
        vector<int> f(n, 1);
        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (envelopes[j][1] < envelopes[i][1]) {
                    f[i] = max(f[i], f[j] + 1);
                }
            }
        }
        return *max_element(f.begin(), f.end());
    }
};
// @lc code=end

