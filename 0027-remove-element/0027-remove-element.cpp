class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l = nums.size();
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == val)
            {
                if (i + 1 != nums.size())
                {
                    int t = nums[i];
                    nums[i] = nums[nums.size() - 1];
                    nums[nums.size() - 1] = t;
                }
                nums.pop_back();
                i--;
            }
        }
        return nums.size();
    }
};