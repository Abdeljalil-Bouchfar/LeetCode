class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size(), res = 0, t = n - 1;
        for(int i = 0; i < n;i++)
        {
            for(int j = 0; j < n;j++)
                if (i == j || t == j)
                    res += mat[i][j];
            t--;
        }
        return res;
    }
};