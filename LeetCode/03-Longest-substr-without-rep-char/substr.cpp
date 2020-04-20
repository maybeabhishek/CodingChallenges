class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_set<char>m;
        int start=0, end = 0, ma = -1;
        while(start < n && end < n){
            if(m.find(s[end])!=m.end()){
                m.erase(s[start++]);
            }
            else{
                m.insert(s[end++]);
                ma = max(ma,end-start);
            }
        }
        return max(ma,0);
    }
};