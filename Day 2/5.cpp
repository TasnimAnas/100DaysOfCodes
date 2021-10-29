class Solution
{
public:
    int climbStairs(int n)
    {
        if (n < 3)
            return n;
        int a = 1;
        int b = 2;
        int ans = a + b;
        for (int i = b + a; i <= n; i++)
        {
            ans = a + b;
            int t = b;
            b = t + a;
            a = t;
        }
        return ans;
    }
};