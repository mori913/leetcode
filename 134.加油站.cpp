/*
 * @lc app=leetcode.cn id=134 lang=cpp
 *
 * [134] 加油站
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    long long minCost(vector<int> &nums, vector<int> &cost)
    {
        int n = nums.size();
        vector<pair<int, int>> vp;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            vp.push_back(pair<int, int>(nums[i], cost[i]));
            sum += cost[i];
        }
        sort(vp.begin(), vp.end(), [](pair<int, int> &a, pair<int, int> &b)
             { return a.first < b.first; });
        int cur = 0;
        for (int i = 0; i < n; i++)
        {
            cur += vp[i].second;
            if (cur > sum / 2)
            {
                int result = 0;
                  for (auto pair : vp)
                {
                    result += (pair.first - vp[i].first) * pair.second;
                }
                return result;
            }
        }
        return 0;
    }
};
// @lc code=end
int main()
{
    Solution soluion;

    vector<int> nums = {1, 3, 5, 2};
    vector<int> cost = {2, 3, 1, 14};
    soluion.minCost(nums, cost);
    return 0;
}