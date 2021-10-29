class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        for (auto &it : nums)
        {
            it = pow(it, 2);
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};