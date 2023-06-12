class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        string pre = "";
        for (int i = 0; i < nums.size(); i++)
        {
            if (i + 1 >= nums.size() || nums[i + 1] != nums[i] + 1)
                ans.push_back(pre + to_string(nums[i])), pre = "";
            else if (pre.empty())
                pre = to_string(nums[i]) + "->";
        }
        return ans;
    }
};