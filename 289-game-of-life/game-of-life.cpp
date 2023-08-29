class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<pair<int, int>> newVals;
        int n = board.size(), m = board.front().size();
        for (int i = 0; i < n; ++i)
				{
            for (int j = 0; j < m; ++j)
            {
							int ones = 0;
							//upper left
							if(i && j && board[i-1][j-1]) ones++;

							//upper
							if(i && board[i-1][j]) ones++;

							//upper right 
							if(i && j + 1 < m && board[i-1][j+1]) ones++;

							//left 
							if(j && board[i][j-1]) ones++;

							//right
							if(j + 1 < m && board[i][j+1]) ones++;

							//lower left
							if(i + 1 < n && j && board[i+1][j-1]) ones++;

							//down
							if(i + 1 < n && board[i+1][j]) ones++;

							//lower right 
							if(i+1 < n && j+1 < m && board[i+1][j+1]) ones++;

							if ((board[i][j] && ones < 2) || (board[i][j] && ones > 3) || (!board[i][j] && ones == 3))
									newVals.push_back({i, j});
            }
				}
        for (auto &p : newVals)
            board[p.first][p.second] = !board[p.first][p.second];
    }
};