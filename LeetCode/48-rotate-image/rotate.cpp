class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        
        for(int i = 0; i < n / 2; i++){
            for(int j = 0; j < (n + 1 )/2 ; j++){
                int prv = matrix[i][j];
                for(int k = 0; k < 4; k ++){
                    int new_i = j;
                    int new_j = n - 1 - i;
                    int temp = matrix[new_i][new_j];
                    matrix[new_i][new_j] = prv;
                    prv = temp;
                    i = new_i;
                    j = new_j;
                }
            }
        }
    }
};