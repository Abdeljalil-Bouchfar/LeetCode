class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n = matrix.front().size();
        vector<vector<int>> ans(n);
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < matrix.size(); ++j)
                ans[i].push_back(matrix[j][i]);
        return ans;
    }
};