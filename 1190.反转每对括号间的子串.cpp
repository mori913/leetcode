/*
 * @lc app=leetcode.cn id=1190 lang=cpp
 *
 * [1190] 反转每对括号间的子串
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    string reverseParentheses(string s)
    {
        int length = s.size();
        vector<int> pairs(length);
        stack<int> stk;
        for (size_t i = 0; i < length; i++)
        {
            if (s[i] == '(')
            {
                stk.push(i);
            }
            else if (s[i] == ')')
            {
                int top = stk.top();
                stk.pop();
                pairs[top] = i;
                pairs[i] = top;
            }
        }
        int step = 1;
        int index = 0;
        string result;
        for (size_t i = 0; i < length; i++)
        {
            if (s[index] == '(' || s[index] == ')')
            {
                index = pairs[index];
                step = -step;
            }
            else
            {
                result.push_back(s[index]);
            }

            index = index + step;
        }
        return result;
    }
};
// @lc code=end

int main()
{
    string s = "(u(love)i)";
    Solution solution;
    solution.reverseParentheses(s);
}
