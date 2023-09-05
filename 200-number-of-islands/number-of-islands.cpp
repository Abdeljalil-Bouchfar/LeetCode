class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size(), m = grid.front().size(), ans = 0;
        
        queue<pair<int, int>> qu;
        int ti, tj;
        pair<int, int> tp;
        const vector<vector<int>> dr = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if (grid[i][j] == '1')
                {
                    qu.push({i, j});
                    grid[i][j] = '1';
                    while(!qu.empty())
                    {
                        tp = qu.front();
                        qu.pop();
                        for (auto &v : dr)
                        {
                            ti = tp.first + v[0], tj = tp.second + v[1];
                            if (ti >= 0 && tj >= 0 && ti < n && tj < m && grid[ti][tj] == '1')
                                qu.push({ti, tj}), grid[ti][tj] = '0';
                        }
                    }
                    ++ans;
                }
            }
        }
        return ans;
    }
};