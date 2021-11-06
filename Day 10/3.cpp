class Solution
{
public:
    bool isAllowed(vector<int> &v, string chk)
    {

        for (auto it : chk)
        {
            if (!v[it])
                return false;
        }
        return true;
    }

    int countConsistentStrings(string allowed, vector<string> &words)
    {
        vector<int> v('z' + 1, 0);
        for (auto it : allowed)
        {
            v[it]++;
        }
        int ans = 0;
        for (auto it : words)
        {
            if (isAllowed(v, it))
                ans++;
        }
        return ans;
    }
};