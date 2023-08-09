class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int n = maze.size(), m = maze.front().size();
        vector<vector<int>> visited(n, vector<int>(m, -1));

        const int dr[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        queue<pair<int, int>> qu;
        qu.push({entrance[0], entrance[1]});
        visited[entrance[0]][entrance[1]] = 0;
        while (!qu.empty())
        {
            pair<int, int> p = qu.front();
            cout << p.first << ' ' << p.second << endl;
            qu.pop();
            for (int i = 0; i < 4; i++)
            {
                int x = p.second + dr[i][0], y = p.first + dr[i][1];

                if (x >= 0 && x < m && y >= 0 && y < n && visited[y][x] < 0 && maze[y][x] == '.')
                {
                    qu.push({y, x}), visited[y][x] = visited[p.first][p.second] + 1;
                    if (x == 0 || y == 0 || x + 1 == m || y + 1 == n)
                        return visited[y][x];
                }
            }
        }
        return -1;
    }
};