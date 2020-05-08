class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int h = matrix.size();
        if(h == 0){
            return 0;
        }
        int w = matrix[0].size();
        
        vector<vector<int>> dp(h, vector<int>(w));
        int answer = 0;
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                if(matrix[i][j] == '1'){
                    dp[i][j]= 1;
                    if(i  > 0 && j > 0){
                        dp[i][j] += min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]});
                    }
                    answer = max(answer, dp[i][j]);
                }
            }
        }
        return answer*answer;
    }
};