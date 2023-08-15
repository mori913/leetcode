/*
 * @lc app=leetcode.cn id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        unordered_set<int> cache;
        for (auto num : nums)
        {
            cache.insert(num);
        }
        int ans = 0;
        for (auto num : nums)
        {
            if (!cache.count(num - 1))
            {
                int len = 1;
                int index = num;
                while (cache.count(++index))
                {
                    len++;
                }
                ans = max(len, ans);
            }
        }
        return ans;
    }
};
// @lc code=end
