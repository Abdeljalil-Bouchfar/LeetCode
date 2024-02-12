class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> ump;
        pair<int, int> ans = {0, 0};
        for (int &n : nums)
        {
            if(++ump[n] > ans.first)
                ans = {ump[n], n};
        }
        return ans.second;
    }
};