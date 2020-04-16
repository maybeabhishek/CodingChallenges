class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size()==1 || nums.size()==0)
            return;
        int n = nums.size();
        if(k>n)
            k=k%n;
        std::rotate(nums.begin(), nums.begin() + nums.size() - k, nums.end());
    }
};