class Solution {
public:
    int climbStairs(int n) {
        long n1 = 1, n2 = 1, ans = 1;
        for (int i = 1; i < n; i++)
            ans = n1 + n2, n1 = n2, n2 = ans;
        return ans;
    }
};