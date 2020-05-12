class Solution {
public:
    bool isAnagram(string s, string t) {
        cin.tie(NULL), cout.tie(NULL), ios::sync_with_stdio(false);
        vector<int> arr(27);
        
        for(char i: s)
            arr[i - 'a']++;
        
        for(char i: t)
            arr[i - 'a']--;
        
        for(int i = 0; i < 27; i++){
            if(arr[i] != 0)
                return false;
        }
        
        return true;
    }
};