// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         if(nums.size()==1 || nums.size()==0)
//             return;
//         int n = nums.size();
//         if(k>n)
//             k=k%n;
//         std::rotate(nums.begin(), nums.begin() + nums.size() - k, nums.end());
//     }
// };


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size()==1 || nums.size()==0)
            return;
        int n = nums.size();
         if(k>n)
            k=k%n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
       
        // std::rotate(nums.begin(), nums.begin() + nums.size() - k, nums.end());
    }
};