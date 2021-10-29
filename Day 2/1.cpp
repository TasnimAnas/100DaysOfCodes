class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        vector<int> arr(nums.size(), 0);
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            arr[nums[i] - 1] = 1;
        }
        nums.clear();
        for (int i = 0; i < arr.size(); i++)
        {
            if (!arr[i])
            {
                nums.push_back(i + 1);
            }
        }
        return nums;
    }
};