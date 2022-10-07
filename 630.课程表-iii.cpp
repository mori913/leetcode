/*
 * @lc app=leetcode.cn id=630 lang=cpp
 *
 * [630] 课程表 III
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
public:
    int scheduleCourse(vector<vector<int>> &courses)
    {
        int n = courses.size();
        priority_queue<int> cost_of_courses;
        sort(courses.begin(), courses.end(), [](vector<int> &a, vector<int> &b)
             { return a[1] < b[1]; });

        int time_compustion = 0;
        int course_available = 0;
        for (int i = 0; i < n; i++)
        {

            if (time_compustion + courses[i][0] <= courses[i][1])
            {
                time_compustion += courses[i][0];
                course_available++;
                cost_of_courses.push(courses[i][0]);
            }
            else if (!cost_of_courses.empty() && courses[i][0] < cost_of_courses.top())
            {
                time_compustion -= cost_of_courses.top() - courses[i][0];
                cost_of_courses.pop();
                cost_of_courses.push(courses[i][0]);
            }
        }
        return course_available;
    }
};
// @lc code=end
int main()
{
    Solution solution;
    vector<vector<int>> s;
    s.push_back(vector<int>{5, 5});
    s.push_back(vector<int>{4, 6});
    s.push_back(vector<int>{2, 6});
    solution.scheduleCourse(s);
}
