class Solution
{
public:
    string sortSentence(string s)
    {
        vector<string> v(9 + 1, "");
        string temp = "";
        for (auto &it : s)
        {
            if (it <= '9' && it >= '1')
            {
                int t = it - '0';
                v[t] = temp;
                temp = "";
            }
            else if (it != ' ')
            {
                temp += it;
            }
        }
        string ans = "";
        for (auto &it : v)
        {
            ans += it == "" ? "" : ans == "" ? it
                                             : (" " + it);
        }
        return ans;
    }
};