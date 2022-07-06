class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int buy = prices[0];
        int maxProfit = 0;
        
        for(int i = 1; i < prices.size(); i++){
            int sell = prices[i];
            int profit = sell - buy;
            if(profit < 0){
                buy = sell;
            }
            maxProfit = max(maxProfit, profit);
        }
        
        return maxProfit;
    }
};