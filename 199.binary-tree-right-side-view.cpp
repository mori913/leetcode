/*
 * @lc app=leetcode.cn id=199 lang=cpp
 *
 * [199] Binary Tree Right Side View
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
    void rightSideViewHelper(TreeNode *node, int layer, vector<int> &result)
    {
        if (layer > result.size() - 1)
        {
            result.push_back(node->val);
        }
        if (node->right != nullptr)
            rightSideViewHelper(node->right, layer + 1, result);
        if (node->left != nullptr)
            rightSideViewHelper(node->left, layer + 1, result);
    }
    vector<int> rightSideView(TreeNode *root)
    {
        vector<int> result;
        if (root == nullptr)
        {
            return result;
        }
        result.push_back(root->val);
        rightSideViewHelper(root, 0, result);
        return result;
    }
};
// @lc code=end
