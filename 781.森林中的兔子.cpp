/*
 * @lc app=leetcode.cn id=781 lang=cpp
 *
 * [781] 森林中的兔子
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    int numRabbits(vector<int> &answers)
    {
        map<int, int> answerCount;
        for (auto answer : answers)
        {
            if (answerCount.count(answer))
            {
                answerCount[answer] = answerCount[answer] + 1;
            }
            else
            {
                answerCount[answer] = 1;
            }
        }
        int result = 0;
        for (auto pair : answerCount)
        {
            result += (pair.second / (pair.first + 1)) * (pair.first + 1);
            if (pair.second % (pair.first + 1) != 0)
            {
                result += pair.first + 1;
            }
        }
        return result;
    }
};
// @lc code=end
