class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> m;
        int max = -1;
        int maxNum;
        for(auto i: nums){
            m[i]++;
            if(m[i] > max){
                max = m[i];
                maxNum = i;
            }
        }
        return maxNum;
    }
};