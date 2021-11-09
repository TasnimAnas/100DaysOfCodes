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
    int sumEvenGrandparent(TreeNode *root)
    {
        if (!root)
            return 0;
        int ans = 0;
        stack<TreeNode *> st;
        st.push(root);
        while (!st.empty())
        {
            TreeNode *t = st.top();
            st.pop();
            if (t->val % 2 == 0)
            {
                if (t->left)
                {
                    if (t->left->left)
                        ans += t->left->left->val;
                    if (t->left->right)
                        ans += t->left->right->val;
                }
                if (t->right)
                {
                    if (t->right->left)
                        ans += t->right->left->val;
                    if (t->right->right)
                        ans += t->right->right->val;
                }
            }
            if (t->right)
                st.push(t->right);
            if (t->left)
                st.push(t->left);
        }
        return ans;
    }
};