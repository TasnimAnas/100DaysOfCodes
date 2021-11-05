class Solution
{
public:
    string defangIPaddr(string address)
    {
        vector<string> st(4, "");
        int i = 0;
        for (auto &it : address)
        {
            if (it != '.')
                st[i] += it;
            else
                i++;
        }
        return st[0] + "[.]" + st[1] + "[.]" + st[2] + "[.]" + st[3];
    }
};