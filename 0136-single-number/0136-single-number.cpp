class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if ((i == 0 || nums[i - 1] != nums[i]) && (i + 1 == nums.size() || nums[i + 1] != nums[i]))
                return nums[i];
        }
        return 0;
    }
};