class Solution {
public:
    int reverse(int x) {
        bool neg = x < 0;
        long long y = abs((long long)x);
        long long res = 0;
        while(y > 0){
            res = res*10 + y%10;
            y /= 10;
        }
        
        if(neg)
            res = -1 * res;
        if(res > INT_MAX || res < INT_MIN)
            return 0;
        
        return res;
        
    }
};