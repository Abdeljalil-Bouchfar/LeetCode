class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<pair<int, int>> vec(nums1.size());

        for (int i = 0; i < vec.size(); i++)
            vec[i] = {nums2[i], nums1[i]};

        sort(vec.rbegin(), vec.rend());

        long long sum = 0, ans = 0;
        priority_queue<int, vector<int>, greater<int>> pq;

        for (int i = 0; i < vec.size(); i++)
        {
            if (i >= k - 1)
                ans = max(ans, (sum + vec[i].second) * vec[i].first);
            
            pq.push(vec[i].second);
            sum += vec[i].second;

            if (pq.size() == k)
            {
                sum -= pq.top();
                pq.pop();
            }
        }
        return ans;
    }
};