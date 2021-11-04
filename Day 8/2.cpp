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
    int sumRootToLeaf(TreeNode *root, string s = "")
    {
        if (!root)
            return 0;
        int ans = 0;
        s += to_string(root->val);
        if (!root->left && !root->right)
        {
            ans += stoi(s, nullptr, 2);
            return ans;
        }
        return sumRootToLeaf(root->left, s) + sumRootToLeaf(root->right, s);
    }
};