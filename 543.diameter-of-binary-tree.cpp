/*
 * @lc app=leetcode.cn id=543 lang=cpp
 *
 * [543] Diameter of Binary Tree
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    int diameterOfBinaryTreeHelper(TreeNode *node, int layer, int &result)
    {
        if (node == nullptr)
        {
            return layer;
        }
        int layer1 = diameterOfBinaryTreeHelper(node->left, layer + 1, result);
        int layer2 = diameterOfBinaryTreeHelper(node->right, layer + 1, result);
        int diameter = layer1 + layer2 - 2 * layer - 2;
        result = diameter > result ? diameter : result;
        return max(layer1, layer2);
    }
    int diameterOfBinaryTree(TreeNode *root)
    {
        int result = 0;
        diameterOfBinaryTreeHelper(root, 0, result);
        return result;
    }
};
// @lc code=end
