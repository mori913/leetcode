/*
 * @lc app=leetcode.cn id=79 lang=cpp
 *
 * [79] Word Search
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
private:
    bool existHelper(vector<vector<char>> &board, bool **searched, int x, int y, string word)
    {
    }

public:
    bool exist(vector<vector<char>> &board, string word)
    {
        int n = board.size();
        int m = board[0].size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                bool searched[n][m];
            }
        }
        return false;
    }
};
// @lc code=end
