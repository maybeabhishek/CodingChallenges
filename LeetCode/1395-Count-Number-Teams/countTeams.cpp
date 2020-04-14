class Solution {
public:
    int numTeams(vector<int>& rating) {
        const int n = rating.size();
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            int inc1 = 0, inc2 = 0, dec1 = 0, dec2 = 0;
            for (int j = 0; j < n; ++j) {
                if (j < i) {
                    if (rating[j] < rating[i]) {
                        ++inc1;
                    } else {
                        ++inc2;
                    }
                } else if (j > i) {
                    if (rating[j] < rating[i]) {
                        ++dec1;
                    } else {
                        ++dec2;
                    }
                }
            }
            ans += inc1 * dec2 + inc2 * dec1;
        }
        return ans;
        
    }
};
