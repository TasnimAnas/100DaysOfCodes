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
    int sumOfLeftLeaves(TreeNode *root)
    {
        int ans = 0;
        if (!root)
            return ans;
        stack<TreeNode *> st;
        st.push(root);
        while (!st.empty())
        {
            TreeNode *t = st.top();
            st.pop();
            if (t->right)
                st.push(t->right);
            if (t->left)
            {
                st.push(t->left);
                if (!t->left->left && !t->left->right)
                {
                    ans += t->left->val;
                }
            }
        }
        return ans;
    }
};