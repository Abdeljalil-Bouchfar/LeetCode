class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<pair<int, int>> tp(nums.size());
        vector<int> ans(nums.size(), 0);
        for (int i = 0; i < nums.size(); ++i)
            tp[i] = {nums[i], i};
        sort(tp.begin(), tp.end());
        int diff = 0;
        for (int i = 1; i < nums.size(); ++i)
        {
            if (tp[i].first == tp[i - 1].first)
                diff++;
            else
                diff = 0;
            ans[tp[i].second] = i - diff;
        }
        return ans;
    }
};