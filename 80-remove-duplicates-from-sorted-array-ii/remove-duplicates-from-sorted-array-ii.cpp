class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int hash[20001] = {0};
        for (int i = 0; i < nums.size(); i++)
        {
            hash[nums[i] + 10000] += 1;
            if (hash[nums[i] + 10000] > 2)
            {
                nums[i] = nums.back();
                nums.pop_back();
                i--;
            }
        }
        sort(nums.begin(), nums.end());
        return nums.size();
    }
};