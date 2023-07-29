class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int len = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i - 1] == nums[i])
            {
                len++;
                if (len >= nums.size() / 2)
                    return nums[i];
            }
            else
                len = 0;
        }
        return nums.back(); 
    }
};