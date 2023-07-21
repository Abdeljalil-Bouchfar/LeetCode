class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int ans = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            vector<int> col(grid.size());
            for (int j = 0; j < grid.size(); j++)
                col[j] = grid[j][i];
            for (int k = 0; k < grid.size(); k++)
                ans += grid[k] == col;
        }
        return ans;
    }
};