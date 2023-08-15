/*
 * @lc app=leetcode.cn id=309 lang=cpp
 *
 * [309] Best Time to Buy and Sell Stock with Cooldown
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        int f0 = -prices[0];
        int f1 = 0;
        int new_f0;
        int new_f1;
        int new_f2;
        int f2 = 0;
        for (int i = 1; i < n; i++)
        {
            new_f0 = max(f0, f2 - prices[i]);
            new_f1 = f0 + prices[i];
            new_f2 = max(f2, f1);
            f0 = new_f0;
            f1 = new_f1;
            f2 = new_f2;
        }
        return max(f1, f2);
    }
};
// @lc code=end
