/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int cheapest = 10000;
        int max = 0;
        for (auto price : prices)
        {
            if (price < cheapest)
            {
                cheapest = price;
            }
            if (price - cheapest > max)
            {
                max = price - cheapest;
            }
        }
        return max;
    }
};
// @lc code=end
