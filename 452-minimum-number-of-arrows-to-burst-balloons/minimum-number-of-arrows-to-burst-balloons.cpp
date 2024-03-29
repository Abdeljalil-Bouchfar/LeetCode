class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int ans = 1;
        sort(points.begin(), points.end(), [](auto &v1, auto &v2)
        {
            return v1[1] < v2[1];
        });
        
        int min = points[0][1];
        for (int i = 0; i < points.size(); ++i)
        {
            if (points[i][0] > min)
                ans++, min = points[i][1];
        }
        return ans;
    }
};