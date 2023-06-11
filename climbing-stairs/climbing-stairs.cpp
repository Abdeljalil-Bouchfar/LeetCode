class Solution {
public:
    int climbStairs(int n) {
        long n1 = 1, n2 = 2, ans = n;
        for (int i = 2; i < n; i++)
            ans = n1 + n2, n1 = n2, n2 = ans;
        return ans;
    }
};