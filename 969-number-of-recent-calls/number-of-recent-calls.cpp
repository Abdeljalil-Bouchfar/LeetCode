class RecentCounter {
    queue<int> reqs;
public:
    RecentCounter() {
        
    }
    
    int ping(int t) {
        reqs.push(t);

        while(reqs.front() < t-3000)
            reqs.pop();
    
        return reqs.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */