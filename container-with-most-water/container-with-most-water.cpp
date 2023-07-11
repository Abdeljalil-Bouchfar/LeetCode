class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = -1;
        int mh = -1;
        for (int i = 0; i < height.size(); i++)
        {
            if (mh >= height[i])
                continue;
            mh = height[i];
            
            int s = i, e = height.size() - 1;
            while (s < e)
            {
                if (min(height[s], height[e]) * (e - s) > ans)
                    ans = min(height[s], height[e]) * (e - s);

                e--;
            }
        }
        return ans;
    }
};