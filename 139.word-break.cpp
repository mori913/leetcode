/*
 * @lc app=leetcode.cn id=139 lang=cpp
 *
 * [139] Word Break
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{

public:
    bool wordBreak(string s, vector<string> &wordDict)
    {
        unordered_set<string> dic;
        int maxlength = 0;
        int n = s.length();
        int maxlen = 0;
        for (auto word : wordDict)
        {
            dic.insert(word);
            maxlen = max(maxlen, (int)word.length());
        }
        bool dp[n + 1];
        memset(dp, 0x0, sizeof(dp));
        dp[0] = true;
        for (int i = 1; i <= n; i++)
        {
            for (int j = max(0, i - maxlen); j < i && !dp[i]; j++)
            {
                if (dic.count(s.substr(j, i - j)))
                    dp[i] = dp[j];
            }
        }
        return dp[n];
    }
};
// @lc code=end
int main()
{
    string s = "leetcode";
    vector<string> v{"leet", "code"};
    Solution solution;
    solution.wordBreak(s, v);
}
