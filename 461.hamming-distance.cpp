/*
 * @lc app=leetcode.cn id=461 lang=cpp
 *
 * [461] Hamming Distance
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    int hammingDistance(int x, int y)
    {
        int result = 0;
        while (x > 0 || y > 0)
        {
            if (x % 2 != y % 2)
            {
                result++;
            }
            x = x / 2;
            y = y / 2;
        }
        return result;
    }
};
// @lc code=end
