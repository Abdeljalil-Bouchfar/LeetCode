class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices.front(), profit = 0;
        for (int &n : prices)
            buy = min(n, buy), profit = max(profit, n - buy);
        
        return profit;
    }
};