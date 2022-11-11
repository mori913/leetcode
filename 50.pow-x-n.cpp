/*
 * @lc app=leetcode.cn id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    double myPow(double x, int n)
    {
        if (n == 0 && abs(x - 1.0) < 0.0001)
        {
            return 1;
        }
        double result = 1;
        if (n > 0)
        {
            while (n > 0)
            {
                result *= x;
                n--;
            }
        }
        if (n < 0)
        {
            while (n < 0)
            {
                result /= x;
                n++;
            }
        }
        return result;
    }
};
// @lc code=end
