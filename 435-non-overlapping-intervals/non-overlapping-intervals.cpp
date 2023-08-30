class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](auto &v1, auto &v2) {return v1[1] < v2[1];});
        int ans = 0, j = 0;
        for (int i = 1; i < intervals.size(); ++i)
        {
            if (intervals[i][0] < intervals[j][1])
                ans++;
            else
                j = i;
        }
        return ans;
    }
};