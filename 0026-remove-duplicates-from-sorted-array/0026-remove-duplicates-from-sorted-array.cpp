class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = 0, l = nums.size();
        vector<int> tmp;
        for (int i = 0; i < l; i++)
        {
            if (find(tmp.begin(), tmp.end(), nums[i]) == tmp.end())
                tmp.push_back(nums[i]);
        }
        nums = tmp;
        return tmp.size();
    }
};