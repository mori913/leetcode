/*
 * @lc app=leetcode.cn id=448 lang=cpp
 *
 * [448] Find All Numbers Disappeared in an Array
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        int n = nums.size();
        int hash[n + 1];
        memset(hash, 0x0, sizeof(hash));
        vector<int> result;
        for (auto n : nums)
        {
            hash[n]++;
        }
        for (int i = 1; i <= n; i++)
        {
            if (hash[i] == 0)
            {
                result.push_back(i);
            }
        }
        return result;
    }
};
// @lc code=end
