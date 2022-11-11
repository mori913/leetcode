/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */
#include "stdc++.h"
using namespace std;
class Solution
{
public:
    string minNumber(vector<int> &nums)
    {
        vector<string> nums_string;
        for (auto num : nums)
        {
            nums_string.push_back(to_string(num));
        }
        sort(nums.begin(), nums.end(), [](string &a, string &b)
             { return a + b < b + a; });
        string result;
        for (auto a : nums_string)
        {
            result += a;
        };
        return result;
    }
}