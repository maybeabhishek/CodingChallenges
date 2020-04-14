class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        int n = shift.size();
        int direction = 0;
        for(int i = 0; i < n; i++){
            if(shift[i][0]==0)
                direction+=shift[i][1];
            else
                direction-=shift[i][1];
        }
        cout << direction;
        int si = s.size();
        if(abs(direction) > si) 
            direction%=si;
        if(direction==0)
            return s;
        else if(direction > 0)
            rotate(s.begin(),s.begin() + direction, s.end());
        else
            rotate(s.begin(),s.begin() + si+ direction, s.end());
        return s;
    }
};