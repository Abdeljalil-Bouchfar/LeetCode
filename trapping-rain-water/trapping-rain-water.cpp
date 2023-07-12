class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0, s = 0, e = height.size() - 1;
        int ml = height.front(), mr = height.back();
        while (s < e)
        {
            int t;
            if (ml < mr)
            {
                t = ml - height[s];
                ml = max(ml, height[++s]);
            }
            else
            {
                t = mr - height[e];
                mr = max(mr, height[--e]);
            }
            ans += t;
        }
        return ans;
    }
};