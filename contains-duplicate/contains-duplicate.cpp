class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> h;
        for(int i = 0; i < nums.size(); i++)
        {
            h.insert(nums[i]);
            if (h.size() != i + 1)
                return true;
        }
        return false;
    }
};