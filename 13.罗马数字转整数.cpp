/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    int romanToInt(string s)
    {
        int n = s.length();
        int result = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'I' && i + 1 < n && (s[i + 1] == 'V' || s[i + 1] == 'X'))
            {
                result--;
                continue;
            }
            if (s[i] == 'X' && i + 1 < n && (s[i + 1] == 'L' || s[i + 1] == 'C'))
            {
                result = result - 10;
                continue;
            }
            if (s[i] == 'C' && i + 1 < n && (s[i + 1] == 'D' || s[i + 1] == 'M'))
            {
                result = result - 100;
                continue;
            }
            switch (s[i])
            {
            case 'I':
                result++;
                break;
            case 'V':
                result = result + 5;
                break;
            case 'X':
                result = result + 10;
                break;
            case 'L':
                result = result + 50;
                break;
            case 'C':
                result = result + 100;
                break;
            case 'D':
                result = result + 500;
                break;
            case 'M':
                result = result + 1000;
                break;
            default:
                break;
            }
        }
        return result;
    }
};
// @lc code=end
