class NumArray
{
public:
    vector<int> nums;
    NumArray(vector<int> &nums)
    {
        this->nums.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++)
            this->nums.push_back(nums[i] + this->nums[i - 1]);
    }

    int sumRange(int left, int right)
    {
        return left == 0 ? nums[right] : nums[right] - nums[left - 1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */