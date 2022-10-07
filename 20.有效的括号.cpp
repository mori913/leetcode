/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> stk;
        for (auto c : s)
        {
            if (c == '(' || c == '[' || c == '{')
            {
                stk.push(c);
            }
            if (c == '}' || c == ')' || c == ']')
            {
                if (stk.empty())
                {
                    return false;
                }
                char stk_c = stk.top();
                if ((stk_c == '(' && c == ')') || (stk_c == '{' && c == '}') || (stk_c == '[' && c == ']'))
                {
                    stk.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        if (!stk.empty())
        {
            return false;
        }
        return true;
    }
};
// @lc code=end
int main()
{
    Solution solution;
    string s = "()";
    solution.isValid(s);
}
