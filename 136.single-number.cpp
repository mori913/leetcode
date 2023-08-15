/*
 * @lc app=leetcode.cn id=136 lang=cpp
 *
 * [136] Single Number
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int lp = 0;
        int n = nums.size();
        while (lp < n - 1)
        {
            if (nums[lp] != nums[lp + 1])
            {
                return nums[lp];
            }
            lp += 2;
        }
        return nums[n - 1];
    }
};
// @lc code=end
