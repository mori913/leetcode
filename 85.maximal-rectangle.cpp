/*
 * @lc app=leetcode.cn id=85 lang=cpp
 *
 * [85] Maximal Rectangle
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    int maximalRectangle(vector<vector<char>> &matrix)
    {
        int n = matrix.size();
        if (n == 0)
        {
            return 0;
        }
        int m = matrix[0].size();
        int left[n][m];
        memset(left, 0, sizeof(left));
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == '0')
                {
                    left[i][j] = 0;
                }
                else
                {
                    left[i][j] = (j == 0 ? 0 : left[i][j - 1]) + 1;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == '1')
                {
                    int width = left[i][j];
                    for (int k = i; k >= 0 && matrix[k][j] == '1'; k--)
                    {
                        width = min(width, left[k][j]);
                        ans = max(width * (i - k + 1), ans);
                    }
                }
            }
        }
        return ans;
    }
};
// @lc code=end