class Solution
{
public:
    string truncateSentence(string s, int k)
    {
        string ans = "";
        for (auto it : s)
        {
            if (!k)
                break;
            if (it == ' ')
            {
                k--;
                if (k)
                    ans += it;
            }
            else
                ans += it;
        }
        return ans;
    }
};