class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0, j = grid[0].size();
        for (int i = 0; i < grid.size(); i++)
        {
            for ( ;j > 0; j--)
                if (grid[i][j - 1] >= 0)
                    break;
            ans += grid[0].size() - j;
        }
        return ans;
    }
};