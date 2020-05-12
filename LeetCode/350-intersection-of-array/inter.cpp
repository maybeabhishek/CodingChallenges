class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        cin.tie(NULL), cout.tie(NULL), ios::sync_with_stdio(false);
        unordered_map<int, int>  m;
        int n1 = nums1.size();
        int n2 = nums2.size();
        for(int i = 0; i < n1;i++)
            m[nums1[i]]++;
        vector<int> res;
        for(int i = 0; i < n2; i++){
            if(m[nums2[i]]>0){
                res.push_back(nums2[i]);
                m[nums2[i]]--;
            }
                
        }
        return res;
    }
};