/*
 * @lc app=leetcode.cn id=322 lang=cpp
 *
 * [322] Coin Change
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    int coinChange(vector<int> &coins, int amount)
    {
        if (amount == 0)
        {
            return 0;
        }
        int dp[amount + 1];
        for (int i = 1; i <= amount; i++)
        {
            dp[i] = -1;
        }
        dp[0] = 0;
        for (int i = 1; i <= amount; i++)
        {
            for (auto coin : coins)
            {
                if (i - coin >= 0 && dp[i - coin] != -1)
                {
                    if (dp[i] == -1)
                        dp[i] = dp[i - coin] + 1;
                    else
                        dp[i] = min(dp[i], dp[i - coin] + 1);
                }
            }
        }
        return dp[amount];
    }
};
// @lc code=end
int main()
{
    vector<int> v{2, 5, 10, 1};
    Solution solution;
    solution.coinChange(v, 27);
}
