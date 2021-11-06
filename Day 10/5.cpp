class Solution
{
public:
    string toLowerCase(string s)
    {
        for (auto &it : s)
        {
            if (it <= 'Z' && it >= 'A')
                it += 32;
        }
        return s;
    }
};