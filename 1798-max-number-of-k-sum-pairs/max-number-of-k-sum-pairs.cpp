class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int s = 0, e = nums.size() - 1;
        int ans = 0;
        for (auto n : nums)
            cout << n << ' ';
        cout << endl;
        while (s < e)
        {
            if (nums[s] + nums[e] == k)
                ans++, e--, s++;
            else if (nums[s] + nums[e] > k)
                e--;
            else
                s++;
           // cout << s << ' ' << e << " -> "; 
        }
        return ans;
    }
};