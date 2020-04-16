class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 0;
        int n = nums.size();
        if(n==0)
            return 0;
        int prev = nums[0];
        for(int i = 0; i<n; i++){
            if(nums[i]!=prev){
                nums[++index] = nums[i];   
                prev = nums[i];
            }
            
        }
        nums.erase(nums.begin()+index+1,nums.end());
        return nums.size();
    }
};