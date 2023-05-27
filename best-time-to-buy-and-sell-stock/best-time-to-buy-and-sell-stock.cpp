class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0, min = prices.front(), max = prices.back();
        for (int &n : prices)
        {
            max = n;
            if (max < min)
                min = max;
            else if (max - min > ans)
                ans = max - min;
        }
        return ans;
    }
};