class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int hash[201] = {0};
        for (int i = 0; i < nums.size(); i++)
        {
            if (hash[nums[i] + 100])
            {
                nums[i] = nums.back();
                nums.pop_back();
                i--;
            }
            hash[nums[i] + 100] = 1;
        }
        sort(nums.begin(), nums.end());
        return nums.size();
    }
};