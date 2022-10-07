/*
 * @lc app=leetcode.cn id=200 lang=cpp
 *
 * [200] 岛屿数量
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    void numIslansHelper(vector<vector<char>> &grid, int x, int y, int n, int m)
    {
        if (x < 0 || x >= n || y < 0 || y >= m)
        {
            return;
        }
        if (grid[x][y] == '1')
        {
            grid[x][y] = '2';
            numIslansHelper(grid, x + 1, y, n, m);
            numIslansHelper(grid, x - 1, y, n, m);
            numIslansHelper(grid, x, y + 1, n, m);
            numIslansHelper(grid, x, y - 1, n, m);
        }
        return;
    }
    int numIslands(vector<vector<char>> &grid)
    {
        int n = grid.size();
        int m = grid[1].size();
        int result = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == '1')
                {
                    numIslansHelper(grid, i, j, n, m);
                    result++;
                }
            }
        }
        return result;
    }
};
// @lc code=end
int main()
{
    Solution solution;
    vector<vector<char>> grid(1, vector<char>(1, '1'));
    solution.numIslands(grid);
}
