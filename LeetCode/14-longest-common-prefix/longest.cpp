class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0)
            return "";
        
        for(int answer = 1; true; answer++){
            for(const string& str: strs){
                if((int)str.length() < answer || str[answer-1] != strs[0][answer-1])
                    return str.substr(0, answer-1);
            }
        }
    }
};