/*
 * @lc app=leetcode.cn id=31 lang=cpp
 *
 * [31] Next Permutation
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 1)
        {
            return;
        }
        int i = n - 1;
        while (i > 0 && nums[i] <= nums[i - 1])
        {
            i--;
        }
        if (i > 0)
        {
            int j = n - 1;
            while (j >= i && nums[i - 1] >= nums[j])
            {
                j--;
            }
            swap(nums[i - 1], nums[j]);
        }
        reverse(nums.begin() + i, nums.end());
    }
};
// @lc code=end
