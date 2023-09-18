class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int hash[101] = {0};
        int ans = 0;
        for (int &n : nums)
        {
            ans += hash[n];
            hash[n]++;
        }
        return ans;
    }
};