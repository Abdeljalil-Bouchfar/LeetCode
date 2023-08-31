class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int hash[10001] = {0};
        vector<int> ans(n, -1);

        for(int j = 0; j < nums2.size(); ++j)
            hash[nums2[j]] = j + 1;
        
        for(int j = 0; j < n; ++j)
        {
            if (!hash[nums1[j]])
                continue;
            for (int i = hash[nums1[j]]; i < nums2.size(); ++i)
            {
                if (nums2[i] > nums1[j])
                {
                    ans[j] = nums2[i];
                    break;
                }
            }
        }
        return ans;
    }
};