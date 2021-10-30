class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int prof = 0;
        int cp = 0;
        int buy = prices[0];
        int sell = buy;
        int i = 0;
        for (i = 0; i < prices.size() - 1;)
        {
            if (prices[i] < prices[i + 1])
            {
                buy = prices[i];
                i++;
                break;
            }
            i++;
        }

        while (i < prices.size())
        {
            if (buy <= prices[i])
            {
                prof += prices[i] - buy;
                buy = prices[i];
            }
            else
            {
                buy = prices[i];
            }
            i++;
        }
        return prof;
    }
};