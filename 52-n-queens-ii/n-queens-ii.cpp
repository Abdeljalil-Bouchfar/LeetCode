class Solution {
public:
    int ans = 0;
    int	placements[10];

    bool	is_safe_position(int &x, int &y)
    {
        for (int i = 0; i < x; i++)
        {
            int tmp_x = i, tmp_y = placements[i];
            if (x == tmp_x || y == tmp_y || x - y == tmp_x - tmp_y || x + y == tmp_x + tmp_y)
                return false;
        }
        return true;
    }

    void solve(int &n, int x)
    {
        if (x == n)
            ans++;
        else
        {
            for (int y = 0; y < n; y++)
            {
                if (is_safe_position(x, y))
                {
                    placements[x] = y;
                    solve(n, x + 1);
                }
            }
        }
    }

    int totalNQueens(int n) {
        solve(n, 0);
        return ans;
    }
};