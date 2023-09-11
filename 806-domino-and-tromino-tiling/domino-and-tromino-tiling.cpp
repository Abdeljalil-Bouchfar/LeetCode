class Solution {
public:
    int dp[1001][4] = {0};
    const int MOD = 1000000007;
    int solve(int n, bool c1, bool c2)
    {
        if (!n) return 1;
        int state = 0;
        if (c1 && !c2) state = 1;
        if (!c1 && c2) state = 2;
        if (!c1 && !c2) state = 3;

        long long pos = 0;
        if (dp[n][state]) return dp[n][state];

        if (state == 0)
        {
            pos += solve(n - 1, true, true);
            if (n > 1) pos += solve(n - 2, true, true);
            if (n > 2)
                pos += solve(n - 1, true, false), pos += solve(n - 1, false, true);
        }
        if (state == 1)
        {
            if (n > 1) pos += solve(n - 2, true, true);
            if (n > 2) pos += solve(n - 1, false, true);
        }
        if (state == 2)
        {
            if (n > 1) pos += solve(n - 2, true, true);
            if (n > 2) pos += solve(n - 1, true, false);
        }
        return dp[n][state] = pos % MOD;
    }

    int numTilings(int n) {
        return solve(n, true, true);
    }
};