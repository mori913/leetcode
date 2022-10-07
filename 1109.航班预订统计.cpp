/*
 * @lc app=leetcode.cn id=1109 lang=cpp
 *
 * [1109] 航班预订统计
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    vector<int> corpFlightBookings(vector<vector<int>> &bookings, int n)
    {
        vector<int> seats(n + 1, 0);
        for (auto booking : bookings)
        {
            int start = booking[0];
            int end = booking[1];
            int seat = booking[2];
            seats[start - 1] += seat;
            seats[end] -= seat;
        }
        for (int i = 0; i < n; i++)
        {
            seats[i + 1] += seats[i];
        }
        seats.pop_back();
        return seats;
    }
};
// @lc code=end
