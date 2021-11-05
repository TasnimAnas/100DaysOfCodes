class Solution
{
public:
    int balancedStringSplit(string s)
    {
        int r = 0;
        int l = 0;
        int ans = 0;
        for (auto &it : s)
        {
            if (it == 'R')
                r++;
            else
                l++;
            if (l && l == r)
            {
                ans++;
                l = r = 0;
            }
        }
        return ans;
    }
};