class Solution {
public:
    bool canJump(vector<int>& nums) {
         int n = nums.size();
         int count_so_far = 0;
         for(int i = 0; i <=count_so_far; i++){
             if(i==n-1)
                 return true;
             count_so_far = max(count_so_far, i + nums[i]);
         }
        return false;

    }
};