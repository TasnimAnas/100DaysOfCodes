class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int l = 0;
        int r = nums.size() - 1;
        while (l <= r)
        {
            if (nums[((l + r) / 2)] == target)
                return ((l + r) / 2);
            if (target > nums[((l + r) / 2)])
                l = ((l + r) / 2) + 1;
            else
                r = ((l + r) / 2) - 1;
        }
        return -1;
    }
};