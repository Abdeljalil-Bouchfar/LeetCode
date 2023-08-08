class Solution {
public:
    vector<vector<string>> res;
    int	placements[10];

    bool	is_safe_position(int col, int position)
    {
        int	qx = col, qy = position;

        for (int i = 0; i < col; i++)
        {
            int tempx = i, tempy = placements[i];
            if (qx == tempx || qy == tempy || qx - qy == tempx - tempy || qx + qy == tempx + tempy)
                return false;
        }
        return true;
    }

    void solve(int &n, int col)
    {
        if (col == n)
        {
            res.push_back({});
            for (int i = 0; i < n; i++)
            {
                res.back().push_back("");
                for (int j = 0; j < n; j++)
                    res.back().back() += (j == placements[i] ? 'Q' : '.');
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (is_safe_position(col, i))
            {
                placements[col] = i;
                solve(n, col + 1);
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        solve(n, 0);
        return res;
    }
};