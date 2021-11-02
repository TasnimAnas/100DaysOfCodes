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
    void inOrder(TreeNode *t, string &s)
    {
        if (!t)
            return;
        inOrder(t->left, s);
        if (!t->left && !t->right)
            s += to_string(t->val) + "-";
        inOrder(t->right, s);
    }

    bool leafSimilar(TreeNode *root1, TreeNode *root2)
    {
        string p, q;
        inOrder(root1, p);
        inOrder(root2, q);
        return p == q;
    }
};