class Solution {
public:
    int n, m;
    const vector<vector<int>> dr = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    void bfs(int &i, int &j, vector<vector<char>>& grid)
    {
        queue<pair<int, int>> qu;
        qu.push({i, j});
        grid[i][j] = '1';

        while(!qu.empty())
        {
            pair<int, int> p = qu.front();
            qu.pop();
            for (auto &v : dr)
            {
                int ti = p.first + v[0], tj = p.second + v[1];
                if (ti >= 0 && tj >= 0 && ti < n && tj < m && grid[ti][tj] == '1')
                    qu.push({ti, tj}), grid[ti][tj] = '0';
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        n = grid.size(), m = grid.front().size();
        int ans = 0;
        
        for(int i = 0; i < n; ++i)
            for(int j = 0; j < m; ++j)
                if (grid[i][j] == '1')
                    ++ans, bfs(i, j, grid);
        return ans;
    }
};