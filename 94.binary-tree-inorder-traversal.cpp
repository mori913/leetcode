/*
 * @lc app=leetcode.cn id=94 lang=cpp
 *
 * [94] Binary Tree Inorder Traversal
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
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> result;
        stack<TreeNode *> stk;
        while (root != nullptr || !stk.empty())
        {
            if (root == nullptr)
            {
                root = stk.top()->right;
                result.push_back(stk.top()->val);
                stk.pop();
            }
            else
            {
                stk.push(root);
                root = root->left;
            }
        }
        return result;
    }
};
// @lc code=end
int main()
{
    TreeNode root(1);
    TreeNode layer1(2);
    TreeNode layer2(3);
    root.left = nullptr;
    root.right = &layer1;
    layer1.left = &layer2;
    Solution solution;
    solution.inorderTraversal(&root);
}