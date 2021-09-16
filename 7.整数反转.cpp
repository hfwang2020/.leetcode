/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

 // @lc code=start
class Solution {
public:
    int reverse(int x) {
        long result = 0, low = 0;
        while (x) {
            low = x % 10;

            result = low + result * 10;
            x = x / 10;
        }

        if (result > __INT32_MAX__ || result * -1 > __INT32_MAX__) {
            return 0;
        }
        return result;
    }
};
// @lc code=end
