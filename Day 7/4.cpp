class Solution
{
public:
    int countKDifference(vector<int> &nums, int k)
    {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (k == abs(nums[i] - nums[j]))
                    ans++;
            }
        }
        return ans;
    }
};