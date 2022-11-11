/*
 * @lc app=leetcode.cn id=1041 lang=cpp
 *
 * [1041] Robot Bounded In Circle
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    bool isRobotBounded(string instructions)
    {
        int dir_x[4] = {0, 1, 0, -1};
        int dir_y[4] = {1, 0, -1, 0};
        int origin[2] = {0, 0};
        int index = 0;

        for (auto ch : instructions)
        {
            if (ch == 'G')
            {
                origin[0] += dir_x[index];
                origin[1] += dir_y[index];
            }
            if (ch == 'L')
            {
                index = (index + 4 - 1) % 4;
            }
            if (ch == 'R')
            {
                index = (index + 1) % 4;
            }
        }
        if (!(origin[0] == 0 && origin[1] == 0) && index == 0)
        {
            return false;
        }
        return true;
    }
};
// @lc code=end
