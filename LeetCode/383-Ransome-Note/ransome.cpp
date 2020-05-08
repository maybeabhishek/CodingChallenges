class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> m;
        for(char i: ransomNote){
            m[i]++;
        }
        for(char j: magazine){
            m[j]--;
        }
        for(auto i: m){
            if(i.second > 0)
                return false;
        }
        return true;
    }
};