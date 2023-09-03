class Solution {
public:
    int getMaximumGenerated(int n) {
        vector<int> vec(++n, 1);
        vec[0] = 0;
        int ans = 0;
        for (int i = 0; i < n; ++i)
        {
            if (i * 2 < n && i * 2 >= 2)
                vec[i * 2] = vec[i];
            if ((i * 2) + 1 < n && (i * 2) + 1 >= 2)
                vec[(i * 2) + 1] = vec[i] + vec[i + 1];
            ans = max(ans, vec[i]);
        }
        return max(ans, vec.back());
    }
};