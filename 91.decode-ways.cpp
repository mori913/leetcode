/*
 * @lc app=leetcode.cn id=91 lang=cpp
 *
 * [91] Decode Ways
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    int numDecodings(string s)
    {
        int n = s.size();
        int dp[n + 1];
        memset(dp, 0, sizeof(dp));
        dp[n] = 1;
        if (s[n - 1] == '0')
            dp[n - 1] = 0;
        else
            dp[n - 1] = 1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                continue;
            }
            if (s.substr(i, 2) <= "26")
            {
                dp[i] += dp[i + 2];
            }
            dp[i] += dp[i + 1];
        }
        return dp[0];
    }
};
// @lc code=end
