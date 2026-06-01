class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX;
        int Profit = 0;
        int n = prices.size();
        for(int i = 0; i < prices.size(); i++){
            mini = min(mini, prices[i]);             
            Profit = max(Profit, prices[i] - mini);
        }
        return Profit;
    }
};
