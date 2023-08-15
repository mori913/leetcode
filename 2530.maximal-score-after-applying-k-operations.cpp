/*
 * @lc app=leetcode.cn id=2530 lang=cpp
 *
 * [2530] Maximal Score After Applying K Operations
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    long long maxKelements(vector<int> &nums, int k)
    {
        priority_queue<int> pq;
        for (auto num : nums)
        {
            pq.push(num);
        }
        long long ans = 0;
        for (int i = 0; i < k; i++)
        {
            ans += pq.top();
            int temp = ceil(pq.top() / 3.0);
            pq.push(temp);
            pq.pop();
        }
        return ans;
    }
};
// @lc code=end
