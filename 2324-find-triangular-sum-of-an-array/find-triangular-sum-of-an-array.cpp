class Solution {
public:
    int triangularSum(vector<int>& nums) {
        short n = nums.size(), i = 0;
        while(--n)
            for(i = 0; i < n; ++i)
                nums[i] = (nums[i] + nums[i + 1]) % 10;
        return nums.front();
    }
};