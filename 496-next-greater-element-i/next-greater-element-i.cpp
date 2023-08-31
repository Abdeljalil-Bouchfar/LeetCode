class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        vector<int> ans(n, -1);
        for(int j = 0; j < n; ++j)
        {
            int i = 0;
            while (i < nums2.size() && nums2[i] != nums1[j])
                ++i;
            while (i < nums2.size())
            {
                if (nums2[i] > nums1[j])
                {
                    ans[j] = nums2[i];
                    break;
                }
                ++i;
            }
        }
        return ans;
    }
};