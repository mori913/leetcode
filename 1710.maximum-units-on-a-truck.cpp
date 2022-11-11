/*
 * @lc app=leetcode.cn id=1710 lang=cpp
 *
 * [1710] Maximum Units on a Truck
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    int maximumUnits(vector<vector<int>> &boxTypes, int truckSize)
    {
        sort(boxTypes.begin(), boxTypes.end(), [](auto &a, auto &b)
             { return a[1] > b[1]; });
        int result = 0;
        for (auto elem : boxTypes)
        {
            int n = min(truckSize, elem[0]);
            result += n * elem[1];
            truckSize -= n;
            if (truckSize == 0)
            {
                break;
            }
        }
        return result;
    }
};
// @lc code=end
