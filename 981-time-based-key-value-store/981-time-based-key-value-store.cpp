class TimeMap {
    unordered_map<string, unordered_map<int, string>> timeMap;
public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        timeMap[key][timestamp] = value;
    }
    
    string get(string key, int timestamp) {
        //string res;
        if (timeMap.count(key))
        {
            for (int t = timestamp; t > 0; t--)
                if(timeMap[key].count(t))
                    return timeMap[key][t];
        }
        return "";
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */