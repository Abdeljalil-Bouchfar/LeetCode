class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        int indexHash[202] = {0};
        while (n)
        {
            int valueHash[202] = {0};
            ans.push_back({});
            for (int i = 0; i < nums.size(); ++i)
                if (!indexHash[i] && !valueHash[nums[i]])
                    ans.back().push_back(nums[i]), valueHash[nums[i]] = 1, indexHash[i] = 1, --n;
        }
        return ans;
    }
};