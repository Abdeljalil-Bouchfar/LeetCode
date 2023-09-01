class StockSpanner {
public:
    stack<pair<int, int>> st;
    pair<int, int> p;
    StockSpanner() {}
    
    int next(int price) {
        if (st.empty())
            st.push({price, 1});
        else
        {
            p = {price, 1};
            while (!st.empty() && st.top().first <= p.first)
                p.second += st.top().second, st.pop();
            st.push(p);
        }
        return st.top().second;  
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */