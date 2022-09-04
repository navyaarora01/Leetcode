class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minstock = INT_MAX;
        int maxprofit = 0;
        for(int i = 0;i<prices.size();i++){
            minstock = min(minstock , prices[i]);
            maxprofit = max(maxprofit , prices[i] - minstock);
        }
        return maxprofit;
    }
};