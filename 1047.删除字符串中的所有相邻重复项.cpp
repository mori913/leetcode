/*
 * @lc app=leetcode.cn id=1047 lang=cpp
 *
 * [1047] 删除字符串中的所有相邻重复项
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    string removeDuplicates(string s)
    {
        string res;
        for (auto ch : s)
        {
            if (res.empty() || res.back() != ch)
            {
                res.push_back(ch);
            }
            else
            {
                res.pop_back();
            }
        }
        return res;
    }
};
// @lc code=end
