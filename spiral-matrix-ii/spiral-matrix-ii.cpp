class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n));
        int xs = 0, xe = n - 1,  ys = 0, ye = n - 1, j = 1;
        while (j <= n * n) 
        {
            for (int i = xs; i <= xe; i++) 
                matrix[ys][i] = j++;
            for (int i = ys + 1; i <= ye; i++) 
                matrix[i][xe] = j++;
            for (int i = xe - 1; i >= xs; i--) 
                matrix[ye][i] = j++;
            for (int i = ye - 1; i > ys; i--) 
                matrix[i][xs] = j++;
            xs++, ys++, xe--, ye--;
        }
        return matrix;
    }
};