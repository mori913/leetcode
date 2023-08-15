/*
 * @lc app=leetcode.cn id=621 lang=cpp
 *
 * [621] Task Scheduler
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    int leastInterval(vector<char> &tasks, int n)
    {
        int count[26];
        memset(count, 0x0, sizeof(count));
        for (auto task : tasks)
        {
            count[task - 'A']++;
        }
        int m = 0;
        for (int i = 0; i < 26; i++)
        {
            m = max(m, count[i]);
        }
        int num = 0;
        for (int i = 0; i < 26; i++)
        {
            if (count[i] == m)
            {
                num++;
            }
        }
        int ans = (m - 1) * (n + 1) + num;
        return ans > tasks.size() ? ans : tasks.size();
    }
};
// @lc code=end
