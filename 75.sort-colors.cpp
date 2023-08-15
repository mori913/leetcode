/*
 * @lc app=leetcode.cn id=75 lang=cpp
 *
 * [75] Sort Colors
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int n = nums.size();
        int count[3];
        memset(count, 0, sizeof(count));
        for (auto num : nums)
        {
            count[num]++;
        }
        count[1] = count[1] + count[0];
        count[2] = count[2] + count[1];
        for (int i = 0; i < count[0]; i++)
        {
            nums[i] = 0;
        }
        for (int i = count[0]; i < count[1]; i++)
        {
            nums[i] = 1;
        }
        for (int i = count[1]; i < count[2]; i++)
        {
            nums[i] = 2;
        }
    }
};
// @lc code=end
