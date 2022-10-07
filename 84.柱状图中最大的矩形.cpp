/*
 * @lc app=leetcode.cn id=84 lang=cpp
 *
 * [84] 柱状图中最大的矩形
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    int largestRectangleArea(vector<int> &heights)
    {
        stack<int> mono;
        int n = heights.size();
        vector<int> left(n, 0), right(n, n - 1);
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            while (!mono.empty() && heights[mono.top()] >= heights[i])
            {
                right[mono.top()] = i - 1;
                mono.pop();
            }
            if (!mono.empty())
            {
                left[i] = mono.top() + 1;
            }
            mono.push(i);
        }
        for (int i = 0; i < n; i++)
        {
            int area = heights[i] * (right[i] - left[i] + 1);
            max = area > max ? area : max;
        }
        return max;
    }
};
// @lc code=end
int main()
{
    Solution solution;
    vector<int> heights{2, 1, 5, 6, 2, 3};
    solution.largestRectangleArea(heights);
}
