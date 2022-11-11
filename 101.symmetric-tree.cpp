/*
 * @lc app=leetcode.cn id=101 lang=cpp
 *
 * [101] Symmetric Tree
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
    bool isSymmetricHelper(TreeNode *left, TreeNode *right)
    {
        if (left == nullptr && right == nullptr)
        {
            return true;
        }
        else if (left == nullptr || right == nullptr)
        {
            return false;
        }
        else if (left->val != right->val)
        {
            return false;
        }
        else
        {
            return isSymmetricHelper(left->left, right->right) && isSymmetricHelper(left->right, right->left);
        }
    }
    bool isSymmetric(TreeNode *root)
    {
        return isSymmetricHelper(root->left, root->right);
    }
};
// @lc code=end
