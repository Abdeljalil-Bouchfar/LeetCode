class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            int s = i + 1, e = nums.size() - 1;
            while (s < e)
            {
                if (nums[i] + nums[s] + nums[e] == 0)
                {
                    vector <int> tmp = {nums[i], nums[s], nums[e]};
                    ans.push_back(tmp);
                    while (s < e && nums[s] == tmp[1]) s++;
                    while (s < e && nums[e] == tmp[2]) e--;
                    //break;
                }
                else if (nums[i] + nums[s] + nums[e] > 0)
                    e--;
                else
                    s++;
            }

            while (i + 1 < nums.size() && nums[i + 1] == nums[i]) 
                i++;
        }
        return ans;
    }
};