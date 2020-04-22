class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        // One line alternative solution
        // return nums.size() > unordered_set<int>(nums.begin(), nums.end()).size();
        
        // Standard Solution
        int n = nums.size();
        unordered_set<int> s;
        for (int i : nums)
        {
            if (s.find(i) != s.end())
                return true;
            s.insert(i);
        }
        return false;
    }
};
