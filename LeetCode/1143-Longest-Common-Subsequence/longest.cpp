
class Solution {
public:
    
    int iter(string a, string b){
        int n = a.length();
        int m = b.length();
        
        vector<vector<int>> dp(n+1, vector<int>(m+1));
        // dp[0][0] = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(a[i]==b[j]){
                    dp[i+1][j+1] = dp[i][j] + 1;
                }   
                else{
                    dp[i+1][j+1] = max(dp[i+1][j], dp[i][j+1]);
                }
            }
        }
        return dp[n][m];
        
        
    }
    int longestCommonSubsequence(string text1, string text2) {
        return iter(text1, text2);
    }
};