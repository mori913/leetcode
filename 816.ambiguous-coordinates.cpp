/*
 * @lc app=leetcode.cn id=816 lang=cpp
 *
 * [816] Ambiguous Coordinates
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    vector<string> ambiguousCoordinates(string s)
    {
        int n = s.length();
        vector<string> result;
        for (int i = 1; i < n - 1; i++)
        {
            string s1 = s.substr(0, i);
            string s2 = s.substr(i, n - 1);
            if (s1.size() != 1 && s1[-1] == '0' && s1[0] == '0')
            {
                continue;
            }
            if (s2.size() != 1 && s2[-1] == '0' && s2[0] == '0')
            {
                continue;
            }
            vector<string> left, right;
            if (s1[0] = 0)
            {
                left.insert(s1);
                left.insert(s1.substr(0, 1) + '.' + s1.substr(1, s1.size()));
            }
        }
        return result;
    }
};
// @lc code=end
