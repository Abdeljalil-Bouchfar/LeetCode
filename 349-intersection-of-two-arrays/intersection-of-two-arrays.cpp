class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int common_hash[1001] = {0};
        int added_hash[1001] = {0};
        for (int &n : nums1)
            common_hash[n] = 1;
        for (int &n : nums2)
            if (common_hash[n] && !added_hash[n])
                ans.push_back(n), added_hash[n] = 1;
        return ans;
    }
};