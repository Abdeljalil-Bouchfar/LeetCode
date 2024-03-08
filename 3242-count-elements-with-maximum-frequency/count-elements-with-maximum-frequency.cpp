class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int max = 0, ans = 0;
        int hash[101] = {0};
        for (int &c : nums)
        {
            hash[c]++;
            if (max < hash[c])
                max = hash[c];
        }
        for (int i = 1; i <= 100; ++i)
            ans += hash[i] == max;
        return ans * max;
    }
};