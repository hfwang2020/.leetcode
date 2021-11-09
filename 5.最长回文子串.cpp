/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */

 // @lc code=start
#ifdef LOCAL
#include "header.h"
#endif

class Solution {
public:

    string longestPalindrome(string s) {
        int i = 0;
        int len = s.length();
        string res;
        while (i < len) {
            string s1 = palindCore(s, i, i + 1);
            string s2 = palindCore(s, i, i);
            res = s1.length() > res.length() ? s1 : res;
            res = s2.length() > res.length() ? s2 : res;
            i++;
        }
        return res;
    }
    string palindCore(string& s, int i, int j) {
        while (i >= 0 && i < s.length() && j >= 0 && j < s.length() && s[i] == s[j]) {
            i--;
            j++;
        }
        return s.substr(i + 1, j - i - 1);
    }
};
// @lc code=end

