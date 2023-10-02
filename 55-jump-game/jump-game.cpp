class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int> db(n, 0);
        db[0] = 1;
        for (int i = 0; i < n; ++i)
        {
            if (db[i] == 0)
                return false;
            if (nums[i] + i + 1 >= n)
                return true;
            for (int j = 1; j <= nums[i]; ++j)
                db[j+i]++;
        }
        return true;
    }
};