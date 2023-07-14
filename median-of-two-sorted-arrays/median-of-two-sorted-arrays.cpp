class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int arr[nums1.size() + nums2.size()];
        int n1 = 0, n2 = 0;
        for (int i = 0; i < nums1.size() + nums2.size(); i++)
        {
            if (n1 >= nums1.size())
                arr[i] = nums2[n2++];
            else if (n2 >= nums2.size())
                arr[i] = nums1[n1++];
            else if (nums1[n1] <= nums2[n2])
                arr[i] = nums1[n1++];
            else
                arr[i] = nums2[n2++];
        }
        if ((nums1.size() + nums2.size()) % 2)
            return arr[(nums1.size() + nums2.size()) / 2];
        else
         return (arr[(nums1.size() + nums2.size()) / 2] + arr[((nums1.size() + nums2.size()) / 2) - 1]) / 2.0;
    }
};