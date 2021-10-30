class Solution
{
public:
    int maxProfit(vector<int> &prices, int fee)
    {
        int buy = INT_MAX, sell = 0;
        for (auto &x : prices)
        {
            buy = min(buy, x - sell);
            sell = max(sell, x - buy - fee);
        }
        return sell;
    }
};