class RandomizedSet {
public:
    unordered_set<int> st;
    int tmp;
    RandomizedSet() {}
    
    bool insert(int val) {
        if (st.find(val) != st.end())
            return false;
        st.insert(val);
        return true;
    }
    
    bool remove(int val) {
        auto it = st.find(val);
        if (it == st.end())
            return false;
        st.erase(it);
        return true;
    }
    
    int getRandom() {
        return *next(st.begin(), (rand() % st.size()));
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */