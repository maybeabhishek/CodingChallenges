class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int n = (int)nums.size();
        if (n == 1)
            return nums[0];

        int m = 0, neg = 0, maxProd = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] < 0)
                swap(m, neg);
            m = max(m * nums[i], nums[i]);
            neg = min(neg * nums[i], nums[i]);
            maxProd = max(maxProd, m);
        }

        return maxProd;
    }
};