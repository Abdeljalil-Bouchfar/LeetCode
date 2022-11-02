class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int t = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i - 1] >= nums[i])
            {
                t++;
                if (i - 2 >= 0 && nums[i - 2] >= nums[i])
                    nums[i] = nums[i - 1]; 
            }
            if (t > 1)
                return false;
        }
        return true;
    }
};