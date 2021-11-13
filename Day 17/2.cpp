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
    int maxDepth(TreeNode *root, bool &flag)
    {
        if (!root || !flag)
            return 0;
        int a = maxDepth(root->left, flag);
        int b = maxDepth(root->right, flag);
        if (abs(a - b) > 1)
            flag = false;
        return 1 + max(a, b);
    }

    bool isBalanced(TreeNode *root)
    {
        bool flag = true;
        maxDepth(root, flag);
        return flag;
    }
};