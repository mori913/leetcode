/*
 * @lc app=leetcode.cn id=994 lang=cpp
 *
 * [994] Rotting Oranges
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    int orangesRotting(vector<vector<int>> &grid)
    {
        int fresh = 0;
        queue<pair<int, int>> bfs;
        int n = grid.size(), m = grid[0].size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 1)
                {
                    fresh++;
                }
                if (grid[i][j] == 2)
                {
                    bfs.push(pair<int, int>{i, j});
                }
            }
        }
        int time = bfs.size();
        int result = 0;
        while (bfs.size())
        {
            if (time == 0)
            {
                result++;
                time = bfs.size();
            }
            auto selected = bfs.front();
            int i = selected.first;
            int j = selected.second;
            if (i - 1 >= 0 && grid[i - 1][j] == 1)
            {
                fresh--;
                bfs.push(pair<int, int>{i - 1, j});
                grid[i - 1][j] = 2;
            }
            if (i + 1 < n && grid[i + 1][j] == 1)
            {
                fresh--;
                bfs.push(pair<int, int>{i + 1, j});
                grid[i + 1][j] = 2;
            }
            if (j - 1 >= 0 && grid[i][j - 1] == 1)
            {
                fresh--;
                bfs.push(pair<int, int>{i, j - 1});
                grid[i][j - 1] = 2;
            }
            if (j + 1 < m && grid[i][j + 1] == 1)
            {
                fresh--;
                bfs.push(pair<int, int>{i, j + 1});
                grid[i][j + 1] = 2;
            }
            time--;
            bfs.pop();
        }
        if (fresh != 0)
        {
            return -1;
        }
        return result;
    }
};
// @lc code=end
int main()
{
    vector<vector<int>> v{{2, 1, 1}, {1, 1, 0}, {0, 1, 1}};
    Solution solution;
    solution.orangesRotting(v);
}
