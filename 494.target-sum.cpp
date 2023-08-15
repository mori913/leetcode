/*
 * @lc app=leetcode.cn id=494 lang=cpp
 *
 * [494] Target Sum
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    int findTargetSumWaysHelper(vector<int> &nums, int cur, int index, int &target)
    {
        if (index == nums.size())
        {
            if (cur == target)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        return findTargetSumWaysHelper(nums, cur + nums[index], index + 1, target) +
               findTargetSumWaysHelper(nums, cur - nums[index], index + 1, target);
    }
    int findTargetSumWays(vector<int> &nums, int target)
    {
        return findTargetSumWaysHelper(nums, 0, 0, target);
    }
};
// @lc code=end
