#include "stdc++.h"
using namespace std;
class Solution
{
public:
    string removeDuplicateLetters(string s)
    {
        int visit[26], count[26];
        for (char c : s)
        {
            count[c - 'a']++;
        }
        string stk;
        for (char c : s)
        {
            if (!visit[c - 'a'])
            {
                while (!stk.empty() && stk.back() > c)
                {
                    if (count[stk.back() - 'a'] > 0)
                    {
                        visit[stk.back() - 'a'] = 0;
                        stk.pop_back();
                    }
                    else
                    {
                        break;
                    }
                }
                visit[c - 'a'] = 1;
                stk.push_back(c);
            }
            count[c - 'a']--;
        }
        return stk;
    }

    int main()
    {
        string s = "bcabc";
        Solution solution;
        string result = solution.removeDuplicateLetters(s);
        return 0;
    }
};