/*
 * @lc app=leetcode.cn id=1668 lang=cpp
 *
 * [1668] Maximum Repeating Substring
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    int maxRepeating(string sequence, string word)
    {
        string s = word;
        int result = 0;
        if (sequence.find(s) != string::npos)
        {
            result++;
            s += word;
        }
        return result;
    }
};
// @lc code=end
int main()
{
    Solution solution;
    string s = "ababc";
    string word = "ab";
    solution.maxRepeating(s, word);
}