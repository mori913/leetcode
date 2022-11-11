/*
 * @lc app=leetcode.cn id=207 lang=cpp
 *
 * [207] 课程表
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
class Solution
{
private:
    vector<vector<int>> edges;
    vector<int> visited;
    bool valid = true;

public:
    void dfs(int u)
    {
        if (!valid)
        {
            return;
        }

        visited[u] = 1;
        for (int v : edges[u])
        {
            if (visited[v] == 0)
            {
                dfs(v);
            }
            else if (visited[v] == 1)
            {
                valid = false;
                return;
            }
        }
        visited[u] = 2;
    }

    bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
    {
        edges.resize(numCourses);
        visited.resize(numCourses);
        for (const auto &info : prerequisites)
        {
            edges[info[1]].push_back(info[0]);
        }
        for (int i = 0; i < numCourses && valid; ++i)
        {
            if (!visited[i])
            {
                dfs(i);
            }
        }
        return valid;
    }
};

// @lc code=end

int main()
{
    Solution solution;
    vector<vector<int>> prequist;
    vector<int> pre1{0, 2};
    vector<int> pre2{1, 2};
    vector<int> pre3{2, 0};
    prequist.push_back(pre1);
    prequist.push_back(pre2);
    prequist.push_back(pre3);
    solution.canFinish(3, prequist);
}
