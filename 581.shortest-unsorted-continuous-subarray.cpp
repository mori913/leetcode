/*
 * @lc app=leetcode.cn id=581 lang=cpp
 *
 * [581] Shortest Unsorted Continuous Subarray
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    int findUnsortedSubarray(vector<int> &nums)
    {
        vector<int> sorted(nums);
        int n = nums.size();
        sort(sorted.begin(), sorted.end());
        int left = 0, right = n - 1;
        while (left < n)
        {
            if (sorted[left] != nums[left])
            {
                break;
            }
            left++;
        }
        while (right >= left)
        {
            if (sorted[right] != nums[right])
            {
                break;
            }
            right--;
        }
        if (right == left)
        {
            return 0;
        }
        else
        {
            return right - left + 1;
        }
    }
};
// @lc code=end
