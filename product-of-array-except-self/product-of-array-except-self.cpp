class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre(nums.size(), nums[0]);
        vector<int> suf(nums.size(), nums[nums.size() - 1]);
        vector<int> ans(nums.size());
        for(int i = 1; i < nums.size(); i++)
        {
            pre[i] = nums[i] * pre[i - 1];
        }
        for(int i = nums.size() - 2; i >= 0; i--)
        {
            suf[i] = nums[i] * suf[i + 1];
        }
        for(int i = 0; i < nums.size(); i++)
        {
            if (i == 0)
                ans[i] = suf[i + 1];
            else if (i ==  nums.size() - 1)
                ans[i] = pre[i - 1];
            else
                ans[i] = pre[i - 1] * suf[i + 1];
        }
        return ans;
    }
};