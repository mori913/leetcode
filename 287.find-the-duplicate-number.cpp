/*
 * @lc app=leetcode.cn id=287 lang=cpp
 *
 * [287] Find the Duplicate Number
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                return nums[i];
            }
        }
        return 0;
    }
};
// @lc code=end
