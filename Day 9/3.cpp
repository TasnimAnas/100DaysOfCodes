class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        vector<int> v('z' + 1, 0);
        //cout<<"HERE"<<endl;
        for (auto &it : stones)
        {
            v[it]++;
        }
        int ans = 0;
        for (auto &it : jewels)
        {
            ans += v[it];
        }
        return ans;
    }
};