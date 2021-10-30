class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int prof = 0;
        int buy = prices[0];
        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] < buy)
            {
                buy = prices[i];
            }
            else
            {
                prof = max(prof, abs(buy - prices[i]));
            }
        }
        return prof;
    }
};