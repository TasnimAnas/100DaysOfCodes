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
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        if (!p && !q)
            return true;
        if ((!p && q) || (p && !q))
            return false;
        queue<TreeNode *> a;
        queue<TreeNode *> b;
        a.push(p);
        b.push(q);
        while (!a.empty() && !b.empty())
        {
            int n = a.size();
            if (n != b.size())
                return false;
            for (int i = 0; i < n; i++)
            {
                if (a.front()->val != b.front()->val)
                    return false;
                if (a.front()->left && b.front()->left)
                {
                    a.push(a.front()->left);
                    b.push(b.front()->left);
                }
                else if ((a.front()->left && !b.front()->left) || (!a.front()->left && b.front()->left))
                {
                    return false;
                }

                if (a.front()->right && b.front()->right)
                {
                    a.push(a.front()->right);
                    b.push(b.front()->right);
                }
                else if ((a.front()->right && !b.front()->right) || (!a.front()->right && b.front()->right))
                {
                    return false;
                }
                a.pop();
                b.pop();
            }
        }
        if (a.empty() != b.empty())
            return false;
        return true;
    }
};