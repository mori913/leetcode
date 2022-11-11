/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] Majority Element
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> counts;
        int majority = 0, cnt = 0;
        for (auto n : nums)
        {
            ++counts[n];
            if (counts[n] > cnt)
            {
                majority = n;
                cnt = counts[n];
            }
        }
        return majority;
    }
};
// @lc code=end
