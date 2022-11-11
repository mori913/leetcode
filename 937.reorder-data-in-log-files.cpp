/*
 * @lc app=leetcode.cn id=937 lang=cpp
 *
 * [937] Reorder Data in Log Files
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    vector<string> reorderLogFiles(vector<string> &logs)
    {
        int n = logs.size();
        vector<string> letter_log;
        vector<string> digit_log;
        for (string s : logs)
        {
            int index = s.find(' ');
            if (isdigit(s[index + 1]))
            {
                digit_log.push_back(s);
            }
            else
            {
                letter_log.push_back(s);
            }
        }
        sort(letter_log.begin(), letter_log.end(), [](string &a, string &b)
             {
            int index1 = a.find(' ');
            int index2 = b.find(' ');
            if(a.substr(index1) == b.substr(index2)){
                return a.substr(0,index1) < b.substr(0,index2);
            }
            return a.substr(index1) < b.substr(index2); });
        for (string s : digit_log)
        {
            letter_log.push_back(s);
        }
        return letter_log;
    }
};
// @lc code=end
