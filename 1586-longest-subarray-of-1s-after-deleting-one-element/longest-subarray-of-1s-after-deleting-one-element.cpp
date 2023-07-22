class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans = 0, s = 0, zr = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            zr += nums[i] == 0;
            if (zr > 1 && i != s && nums[i] == 0 && nums[s] == 0)
                s++, zr--;
            else if (zr > 1 && i != s && nums[i] == 0 && nums[s])
            {
                while (s < i && nums[s])
                    s++;
                s++;
            }
            
            ans = max(ans, i - s);
        }
            
        return ans;
    }
};