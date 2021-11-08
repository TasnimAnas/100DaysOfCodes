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
    TreeNode *invertTree(TreeNode *root)
    {
        if (!root)
            return root;
        stack<TreeNode *> st;
        st.push(root);
        while (!st.empty())
        {
            TreeNode *t = st.top();
            swap(t->right, t->left);
            st.pop();
            if (t->right)
                st.push(t->right);
            if (t->left)
                st.push(t->left);
        }
        return root;
    }
};