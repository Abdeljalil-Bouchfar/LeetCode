class Solution {
public:
    int uniquePaths(int m, int n) {
        int db[m][n];
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (j == 0 || i == 0)
                    db[i][j] = 1;
                else
                    db[i][j] = db[i-1][j] + db[i][j-1];
            }
        }
        return db[m-1][n-1];
    }
};