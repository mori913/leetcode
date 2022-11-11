/*
 * @lc app=leetcode.cn id=226 lang=cpp
 *
 * [226] Invert Binary Tree
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
    void invertTreeHelper(TreeNode *parent)
    {
        if (parent == nullptr)
        {
            return;
        }
        else
        {
            TreeNode *temp = parent->left;
            parent->left = parent->right;
            parent->right = temp;
            invertTreeHelper(parent->left);
            invertTreeHelper(parent->right);
        }
    }
    TreeNode *invertTree(TreeNode *root)
    {
        invertTreeHelper(root);
        return root;
    }
};
// @lc code=end
