class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int hash[100001] = {0};
        vector<int> ans;
        for (int &c : nums)
        {
            hash[c]++;
            if (hash[c] == 2)
                ans.push_back(c);
        }
        return ans;
    }
};