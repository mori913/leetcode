/*
 * @lc app=leetcode.cn id=338 lang=cpp
 *
 * [338] Counting Bits
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> result;
        result.push_back(0);
        while (1)
        {
            int s = result.size();
            for (int i = 0; i < s; i++)
            {
                if (result.size() == n + 1)
                {
                    return result;
                }
                result.push_back(result[i] + 1);
            }
        }
        return result;
    }
};
// @lc code=end
int main()
{
    Solution solution;
    solution.countBits(2);
}
