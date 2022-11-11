/*
 * @lc app=leetcode.cn id=733 lang=cpp
 *
 * [733] Flood Fill
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
int dir_x[4] = {1, 0, -1, 0};
int dir_y[4] = {0, 1, 0, -1};
class Solution
{
public:
    void floodFillHelper(vector<vector<int>> &image, int sr, int sc, int color, int origin_color)
    {
        if (sr < 0 || sr >= image.size() || sc < 0 || sc >= image[0].size())
        {
            return;
        }
        if (image[sr][sc] == origin_color)
        {
            image[sr][sc] = color;
        }
        else
        {
            return;
        }
        for (int i = 0; i < 4; i++)
        {
            floodFillHelper(image, sr + dir_x[i], sc + dir_y[i], color, origin_color);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
    {
        if (image[sr][sc] == color)
        {
            return image;
        }
        floodFillHelper(image, sr, sc, color, image[sr][sc]);
        return image;
    }
};
// @lc code=end
