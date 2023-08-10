class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pqu;
        for (int &n : nums)
            pqu.push(n);
        while(--k)
            pqu.pop();
        return pqu.top();
    }
};