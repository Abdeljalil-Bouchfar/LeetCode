class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size() - 1;
        int l = 0, r = n;
        while(l <= r) {
            int mid = l + (r - l) / 2;
            if (mid > 0 && nums[mid] < nums[mid - 1]) r = mid - 1;
            else if (mid < n && nums[mid] < nums[mid + 1]) l = mid + 1;
            else return mid;
        }
        return 0;
    }
};