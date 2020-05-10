class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        cin.tie(NULL), cout.tie(NULL), ios::sync_with_stdio(false);
        if(trust.size() < N-1)
            return -1;
        
        vector<int> tru(N+1);
        for(int i = 0;i < trust.size(); i++){
            tru[trust[i][0]]--;
            tru[trust[i][1]]++;
        }
        
        for(int i = 1; i <= N; i++){
            if(tru[i] == N-1)
                return i;
        }
        return -1;
    }
};