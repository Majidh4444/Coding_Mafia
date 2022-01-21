class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0) return 0;
        int profit = 0;
        int maX = prices[0];
        
        for(int i=0;i<prices.size();i++){
            if(prices[i] < maX) maX = prices[i];
            else{
                profit = (prices[i]-maX > profit)?prices[i]-maX:profit;
            }
        }
        return profit;
    }
};