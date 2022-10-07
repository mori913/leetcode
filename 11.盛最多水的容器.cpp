/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int n = height.size();
        int lp = 0;
        int rp = n - 1;
        int max = 0;
        while (lp < rp)
        {
            if (height[lp] > height[rp])
            {
                int area = height[rp] * (rp - lp);
                max = area > max ? area : max;
                rp--;
            }
            else
            {
                int area = height[lp] * (rp - lp);
                max = area > max ? area : max;
                lp++;
            }
        }
        return max;
    }
};
// @lc code=end
