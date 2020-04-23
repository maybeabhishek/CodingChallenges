class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        int pref = 0;
        unordered_map<int,int> count;
        count[pref]++;
        for(int R = 0; R < n; R++){
            pref+=nums[R];
            int need = pref - k;
            ans+=count[need];
            count[pref]++;
        }
        return ans;
    }
};