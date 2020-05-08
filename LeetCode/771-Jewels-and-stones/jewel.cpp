class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_map<char, int> m;
        for(char i: J){
            m[i]++;
        }
        int count = 0;
        for(char i: S){
            count+=m[i];
        }
        return count;
    }
};