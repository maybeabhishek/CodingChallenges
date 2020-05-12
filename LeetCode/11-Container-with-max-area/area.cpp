class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int area = 0;
        int l = 0, r = n - 1;
        
        while(l  < r){
            area = max(area, min(height[l], height[r])*(r - l));
            if(height[l] < height[r])
                l++;
            else
                r--;
        }
        return area;
    }
};

static int fastio = []() {
    #define endl '\n'
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(0);
    return 0;
}();