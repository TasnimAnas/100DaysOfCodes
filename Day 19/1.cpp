class Solution
{
public:
    bool isLeaf(Node *root)
    {
        if (!root->left && !root->right)
            return true;
        return false;
    }
    void leftBoundary(Node *root, vector<int> &ans)
    {
        Node *t = root->left;
        while (t)
        {
            if (!isLeaf(t))
                ans.push_back(t->data);
            if (t->left)
                t = t->left;
            else
                t = t->right;
        }
    }

    void leafNodes(Node *root, vector<int> &ans)
    {
        if (!root)
            return;
        if (isLeaf(root))
            ans.push_back(root->data);
        leafNodes(root->left, ans);
        leafNodes(root->right, ans);
    }

    void rightBoundary(Node *root, vector<int> &ans)
    {
        Node *t = root->right;
        vector<int> st;
        while (t)
        {
            if (!isLeaf(t))
                st.push_back(t->data);
            if (t->right)
                t = t->right;
            else
                t = t->left;
        }
        for (int i = st.size() - 1; i >= 0; i--)
        {
            ans.push_back(st[i]);
        }
    }

    vector<int> boundary(Node *root)
    {
        vector<int> ans;
        if (!root)
            return ans;
        ans.push_back(root->data);
        leftBoundary(root, ans);
        leafNodes(root, ans);
        rightBoundary(root, ans);
        return ans;
    }
};