/*
 * @lc app=leetcode.cn id=394 lang=cpp
 *
 * [394] 字符串解码
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    int convert2int(string s, size_t &index)
    {
        string num = "";
        while (isdigit(s[index]))
        {
            num += s[index];
            index++;
        }
        return stoi(num);
    }
    string decodeString(string s)
    {
        stack<int> duplicateNums;
        string result;
        for (size_t i = 0; i < s.length(); i++)
        {
            if (isdigit(s[i]))
            {
                int num = convert2int(s, i);
                duplicateNums.push(num);
            }
            if (s[i] == ']')
            {
                string duplicate = "";
                while (result.back() != '[')
                {
                    duplicate = result.back() + duplicate;
                    result.pop_back();
                }
                result.pop_back();
                int count = duplicateNums.top();
                duplicateNums.pop();
                for (size_t i = 0; i < count; i++)
                {
                    result += duplicate;
                }
            }
            else
            {
                result.push_back(s[i]);
            }
        }
        return result;
    }
};
// @lc code=end
int main()
{
    Solution solution;
    string s = "3[a]2[bc]";
    solution.decodeString(s);
}
