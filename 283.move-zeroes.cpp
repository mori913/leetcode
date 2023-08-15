/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] Move Zeroes
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int lp = 0;
        for (auto n : nums)
        {
            if (n != 0)
            {
                nums[lp] = n;
                lp++;
            }
        }
        int n = nums.size();
        while (lp < n)
        {
            nums[lp] = 0;
            lp++;
        }
    }
};
// @lc code=end
