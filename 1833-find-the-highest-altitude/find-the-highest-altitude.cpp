class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int pre[gain.size()];
        pre[0] = gain[0];
        int ans = max(pre[0], 0);
        for (int i = 1; i < gain.size(); i++)
            pre[i] = pre[i - 1] + gain[i], ans = max(pre[i], ans);
        return ans;
    }
};