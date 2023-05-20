class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        for (int &n : nums)
            mp[n] = mp[n] + 1;
        
        vector<pair<int, int>> vec;
        for(auto &p : mp)
            vec.push_back(p);
    
        sort(vec.begin(), vec.end(), [](pair<int, int> &p1, pair<int, int> &p2)
        {
            return p1.second > p2.second;
        });

        vector<int> ans(k);
        for (int i = 0; i < k; i++)
            ans[i] = vec[i].first;
        return ans;
    }
};