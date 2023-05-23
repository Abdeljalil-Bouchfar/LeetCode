class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int r = 0; r < 9; r++)
        {
            int row[10] = {0};
            int column[10] = {0};
            int box[10] = {0};
            for (int c = 0; c < 9; c++)
            {
                if (board[r][c] != '.')
                    row[board[r][c] - '0']++;
                if (board[c][r] != '.')
                    column[board[c][r] - '0']++;
            }
            
            for (int i = 0; i < 10; i++)
                if (row[i] > 1 || column[i] > 1)
                    return false;

        }

        for (int r = 3; r <= 9; r+=3)
        {
            for (int c = 3; c <= 9; c+=3)
            {
                int box[10] = {0};
                for (int i = r - 3; i < r; i++)
                    for (int j = c - 3; j < c; j++)
                        if (board[i][j] != '.')
                            box[board[i][j] - '0']++;
                for (int i = 0; i < 10; i++)
                    if (box[i] > 1)
                        return false;
            }
        }
        return true;
    }
};