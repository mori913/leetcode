/*
 * @lc app=leetcode.cn id=1678 lang=cpp
 *
 * [1678] Goal Parser Interpretation
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    string interpret(string command)
    {
        return command.replace("()", "o").replace("(al)", "al");
    }
};
// @lc code=end
