class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        if (!n)
        {
            return;
        }
        int i = m;
        for (int j = 0; j < n; j++)
        {
            nums1[i++] = nums2[j];
        }
        sort(nums1.begin(), nums1.end());
    }
};