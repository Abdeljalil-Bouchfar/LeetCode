class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int, int>> zeros;
        int n = matrix.size(), m = matrix.front().size();
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (matrix[i][j] == 0)
                    zeros.push_back({i, j});
        
        for (auto &p : zeros)
        {
            for (int i = p.first; i >= 0; --i)
                matrix[i][p.second] = 0;
            for (int i = p.first; i < n; ++i)
                matrix[i][p.second] = 0;
            for (int i = p.second; i >= 0; --i)
                matrix[p.first][i] = 0;
            for (int i = p.second; i < m; ++i)
                matrix[p.first][i] = 0;
        }
    }
};