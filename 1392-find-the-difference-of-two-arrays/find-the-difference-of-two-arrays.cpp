class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1, s2;
        vector<vector<int>> ans(2);
        for(int i = 0; i < nums1.size(); i++)
            s1.insert(nums1[i]);    
        for(int i = 0; i < nums2.size(); i++)
            s2.insert(nums2[i]);    

        for (auto n : s1)
            if (!s2.count(n))
                ans[0].push_back(n);
        for (auto n : s2)
            if (!s1.count(n))
                ans[1].push_back(n);
        return ans;
    }
};