class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ans = 0, zeros = 0, ones = 0, s = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            zeros += nums[i] == 0;
            ones += nums[i] == 1;
            for ( ; zeros > k && s < i; s++)
                zeros -= nums[s] == 0, ones -= nums[s] == 1;
            
            if (zeros <= k)
                ans = max(ans, ones + zeros);
        }
        return ans;
    }
};