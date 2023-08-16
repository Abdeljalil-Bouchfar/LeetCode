class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        priority_queue<int, vector<int>, greater<int>> p1, p2;
        int s = 0, e = costs.size() - 1;
        long long ans = 0;
        while (k--)
        {
            while (p1.size() < candidates && s <= e)
                p1.push(costs[s++]);
            while (p2.size() < candidates && s <= e)
                p2.push(costs[e--]);

            int t1 = p1.empty() ? INT_MAX : p1.top(), t2 = p2.empty() ? INT_MAX : p2.top();

            if (t1 <= t2) ans += t1, p1.pop();
            else ans += t2, p2.pop();
        }
        return ans;
    }
};