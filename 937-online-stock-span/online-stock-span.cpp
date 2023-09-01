class StockSpanner {
public:
    vector<int> vec;
    StockSpanner() {
        
    }
    
    int next(int price) {
        vec.push_back(price);
        int n = vec.size() - 1, span = 0;
        while (n >= 0 && vec[n] <= price)
            n--, span++;
        return span;  
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */