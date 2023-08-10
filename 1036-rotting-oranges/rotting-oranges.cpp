class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        const int dr[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        int n = grid.size(), m = grid.front().size();
        vector<vector<int>> visited(n, vector<int>(m, 0));

        queue<pair<int, int>> qu;
        int f = 0, minutes = 1;

        for (int y = 0; y < n; y++)
            for (int x = 0; x < m; x++)
            {
                if (grid[y][x] == 2) qu.push({y, x});
                f += grid[y][x] == 1;
            }
        
        if (f == 0) return 0;

        while (!qu.empty())
        {
            int c = qu.size();
            while(c--)
            {
                pair<int, int> p = qu.front();
                qu.pop();
                for (int i = 0; i < 4; i++)
                {
                    int x = p.second + dr[i][0], y = p.first + dr[i][1];

                    if (x >= 0 && x < m && y >= 0 && y < n && !visited[y][x] && grid[y][x] == 1)
                    {
                        qu.push({y, x}), visited[y][x] = 1;
                        f--;
                    }
                }
            }
            if (f == 0) return minutes;
            minutes++;
        }
        return -1;
    }
};