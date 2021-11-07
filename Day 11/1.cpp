class Solution
{
public:
    string reverseWords(string s)
    {
        string revS = "";
        string temp = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ' && s[i + 1] == ' ')
            {
                continue;
            }
            if (s[i] == ' ')
            {
                if (revS == "")
                    revS = temp;
                else
                    revS = temp + " " + revS;
                temp = "";
            }
            else
            {
                temp += s[i];
            }
        }
        if (temp.length() and temp[0] != ' ')
        {
            if (revS == "")
                revS = temp;
            else
                revS = temp + " " + revS;
        }
        return revS;
    }
};