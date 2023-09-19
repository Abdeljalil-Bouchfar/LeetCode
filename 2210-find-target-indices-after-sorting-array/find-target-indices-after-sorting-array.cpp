class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        int s = 0, e = nums.size() - 1;
        while(s <= e)
        {
            int mid = s + ((e - s) / 2);
            if (nums[mid] < target)
                s = mid + 1;
            else
                e = mid - 1;
        }
        cout << s;
        if (s < nums.size() && nums[s] == target)
        {
            while (s > 0 && nums[s - 1] == target)
                s--;
            while (s < nums.size() && nums[s] == target)
                ans.push_back(s++);
        }
        return ans;
    }
};