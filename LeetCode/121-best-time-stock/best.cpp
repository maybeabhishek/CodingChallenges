class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buyNow =1e+5, sellNow = 0;
        int max = 0;
        for(int i : prices){
            if(i< buyNow){
                if(sellNow !=0){
                    max = std::max(max,sellNow - buyNow);
                }
                buyNow = i;  // 1
                sellNow = 0;
            }
                
            else{
                if(i > sellNow)
                    sellNow = i; // 5
            }
        }
        
        return std::max(max,sellNow - buyNow);
    }
};