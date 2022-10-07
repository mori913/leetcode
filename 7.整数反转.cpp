/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    int reverse(int x)
    {
        string s = "";
        bool neg = false;
        if (x == 0)
        {
            return 0;
        }

        long long max = INT_MAX;
        long long min = INT_MIN;
        if (x == min)
        {
            return 0;
        }
        if (x < 0)
        {
            neg = true;
            x = -x;
        }
        else
        {
            neg = false;
        }
        long long result = 0;
        while (x > 0)
        {
            if (result * 10 > max)
            {
                return 0;
            }
            result = result * 10;
            if (result + x % 10 > max)
            {
                return 0;
            }
            result += x % 10;
            x = x / 10;
        }
        if (neg)
        {
            return -result;
        }
        return result;
    }
};
// @lc code=end
