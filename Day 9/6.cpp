class Solution
{
public:
    int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
    {
        int ruleK = ruleKey == "type" ? 0 : ruleKey == "color" ? 1
                                                               : 2;
        int ans = 0;
        for (auto &it : items)
        {
            if (it[ruleK] == ruleValue)
                ans++;
        }
        return ans;
    }
};