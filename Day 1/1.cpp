class Solution
{
public:
    void sortColors(vector<int> &nums)
    {

        int ones = 0;
        int zeroes = 0;
        int twos = 0;
        for (auto it : nums)
        {
            if (it == 1)
            {
                ones++;
            }
            else if (it == 2)
            {
                twos++;
            }
            else
            {
                zeroes++;
            }
        }
        int j = 0;
        for (int i = 0; i < zeroes; i++)
            nums[j++] = 0;
        for (int i = 0; i < ones; i++)
            nums[j++] = 1;
        for (int i = 0; i < twos; i++)
            nums[j++] = 2;
    }
};