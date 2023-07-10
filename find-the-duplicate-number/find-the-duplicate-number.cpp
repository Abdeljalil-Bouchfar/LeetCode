class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int arr[100001] = {0};
        for (int &n : nums)
        {
            arr[n]++;
            if (arr[n] == 2)
                return n;
        }
        return 1;
    }
};