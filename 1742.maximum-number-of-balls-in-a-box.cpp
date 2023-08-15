/*
 * @lc app=leetcode.cn id=1742 lang=cpp
 *
 * [1742] Maximum Number of Balls in a Box
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    int countBalls(int lowLimit, int highLimit)
    {
        int map[46];
        memset(map, 0x0, sizeof(map));
        for (int i = lowLimit; i <= highLimit; i++)
        {
            int temp = i;
            int sum = 0;
            while (temp > 0)
            {
                sum += temp % 10;
                temp = temp / 10;
            }
            map[sum]++;
        }
        int ans = 0;
        for (auto a : map)
        {
            ans = max(a, ans);
        }
        return ans;
    }
};
// @lc code=end
