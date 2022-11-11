/*
 * @lc app=leetcode.cn id=704 lang=cpp
 *
 * [704] 二分查找
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int l = 0, r = nums.size() - 1;
        while (l <= r)
        {
            int middle = (l + r) / 2;
            if (nums[middle] == target)
            {
                return middle;
            }
            else if (nums[middle] > target)
            {
                r = middle;
            }
            else
            {
                l = middle;
            }
        }
        return -1;
    }
};
// @lc code=end
int main()
{
    Solution solution;
    vector<int> nums{-1, 0, 3, 5, 9, 12};
    solution.search(nums);
}
