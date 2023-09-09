class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans = 0, s = 0, e = 0, sum =0;
        while(e < nums.size() && sum < target)
            sum += nums[e++];

        if (sum >= target) ans = e;

        while(s < nums.size())
        {
            if (sum < target && e < nums.size())
                sum += nums[e++];
            else
                sum -= nums[s++];
            if (sum >= target)
                ans = min(ans, e - s);
        }
        return ans;
    }
};