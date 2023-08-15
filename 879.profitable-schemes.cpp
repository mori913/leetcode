/*
 * @lc app=leetcode.cn id=879 lang=cpp
 *
 * [879] Profitable Schemes
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    int profitableSchemes(int n, int minProfit, vector<int> &group, vector<int> &profit)
    {
        int groupSize = group.size(), MOD = (int)1e9 + 7;
        vector<vector<vector<int>>> dp(groupSize + 1, vector<vector<int>>(n + 1, vector<int>(minProfit + 1)));
        dp[0][0][0] = 1;
        int ans = 0;
        for (int i = 1; i <= groupSize; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                for (int k = 0; k <= minProfit; k++)
                {
                    int member = group[i - 1], earn = profit[i - 1];
                    if (j < member)
                    {
                        dp[i][j][k] = dp[i - 1][j][k];
                    }
                    else
                    {
                        dp[i][j][k] = (dp[i - 1][j][k] + dp[i - 1][j - member][max(0, k - earn)]) % MOD;
                    }
                }
            }
        }
        for (int i = 0; i <= n; i++)
        {
            ans = (ans + dp[groupSize][i][minProfit]) % MOD;
        }
        return ans;
    }
};
// @lc code=end
