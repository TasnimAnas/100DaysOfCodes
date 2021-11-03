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
    int maxDepth(TreeNode *root, int &maxdi)
    {
        if (!root)
            return 0;
        int a = 1 + maxDepth(root->left, maxdi);
        int b = 1 + maxDepth(root->right, maxdi);
        int t = max(a, b);
        if (a + b - 2 > maxdi)
        {
            maxdi = a + b - 2;
        }
        return t;
    }

    int diameterOfBinaryTree(TreeNode *root)
    {
        if (!root)
            return 0;
        int maxdi = -1;
        int t = maxDepth(root, maxdi);
        return maxdi;
    }
};