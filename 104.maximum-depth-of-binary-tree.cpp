/*
 * @lc app=leetcode.cn id=104 lang=cpp
 *
 * [104] Maximum Depth of Binary Tree
 */
#include "stdc++.h"
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
// @lc code=start
class Solution
{
public:
    int maxDepthHelper(TreeNode *root, int layer)
    {
        if (root == nullptr)
        {
            return layer;
        }
        int temp1 = maxDepthHelper(root->left, layer + 1);
        int temp2 = maxDepthHelper(root->right, layer + 1);
        return max(temp1, temp2);
    }
    int maxDepth(TreeNode *root)
    {
        return maxDepthHelper(root, 0);
    }
};
// @lc code=end
