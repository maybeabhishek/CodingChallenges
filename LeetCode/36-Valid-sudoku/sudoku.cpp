class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> rows[9], cols[9], squares[3][3];
        
        for(int i = 0; i< 9; i++){
            for(int j = 0; j < 9; j++){
                if(!rows[i].insert(board[i][j]).second || !cols[i].insert(board[i][j]).second || !squares[i/3][j/3].insert(board[i][j]).second)
                    return false;
            }
        }
        return true;
    }
};