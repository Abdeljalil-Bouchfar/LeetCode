class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int n = board.size(), m = board.front().size();
        queue<pair<int, int>> qu;
        pair<int, int> tp;
        const int dr[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        int visited[201][201] = {0};
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (board[i][j] == 'O' && !visited[i][j] && i && j && i + 1 != n && j + 1 != m)
                {
                    stack<pair<int, int>> os;
                    visited[i][j] = 1;
                    bool surrounded = true;
                    qu.push({i, j});
                    os.push({i, j});
                    while (!qu.empty())
                    {
                        tp = qu.front();
                        qu.pop();
                        for (int k = 0; k < 4; ++k)
                        {
                            int ti = tp.first + dr[k][0], tj = tp.second + dr[k][1];
                            if (ti < 0 || tj < 0 || ti >= n || tj >= m)
                                surrounded = false;
                            else if (board[ti][tj] == 'O' && !visited[ti][tj])
                                qu.push({ti, tj}), os.push({ti, tj}), visited[ti][tj] = 1;
                        }
                    }
                    while (surrounded && !os.empty())
                    {
                        board[os.top().first][os.top().second] = 'X';
                        os.pop();
                    }
                }
            }
        }
    }
};