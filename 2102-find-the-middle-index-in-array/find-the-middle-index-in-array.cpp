class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int rsum = accumulate(nums.begin(), nums.end(),0), lsum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            rsum -= nums[i];
            if (rsum == lsum) return i;
            lsum += nums[i];
        }
        return -1;
    }
};