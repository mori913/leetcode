/*
 * @lc app=leetcode.cn id=54 lang=cpp
 *
 * [54] Spiral Matrix
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        int margin = 0;
        int n = matrix.size();
        int m = matrix[0].size();
        int x = 0, y = 0;
        int dir_x[4] = {0, 1, 0, -1};
        int dir_y[4] = {1, 0, -1, 0};
        vector<int> result;
        while (x < n && y < m && x >= 0 && y >= 0 && matrix[x][y] != -101)
        {
            for (int i = 0; i < 4; i++)
            {

                while (x < n && y < m && x >= 0 && y >= 0 && matrix[x][y] != -101)
                {
                    result.push_back(matrix[x][y]);
                    matrix[x][y] = -101;
                    x = x + dir_x[i];
                    y = y + dir_y[i];
                }
                x = x - dir_x[i];
                y = y - dir_y[i];
                x = x + dir_x[(i + 1) % 4];
                y = y + dir_y[(i + 1) % 4];
            }
        }

        return result;
    }
};
// @lc code=end
int main()
{
    Solution solution;
    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    solution.spiralOrder(v);
}
