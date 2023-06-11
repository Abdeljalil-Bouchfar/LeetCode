class Solution {
public:
    int climbStairs(int n) {
        long o = 1, t = 1, ans = 1;
        for (int i = 1; i < n; i++)
            ans = o + t, o = t, t = ans;
        return ans;
    }
};