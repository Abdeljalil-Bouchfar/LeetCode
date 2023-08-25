class Solution {
public:
    vector<int> hash;
    int solve(vector<int> &nums, int i)
    {
        if (i >= nums.size()) return 0;
        if (hash[i] >= 0) return hash[i];
        hash[i] = max(solve(nums, i + 2) + nums[i], solve(nums, i + 1));
        return hash[i];
    }

    int rob(vector<int>& nums) {
        hash.resize(401, -1);
        return solve(nums, 0);
    }
};