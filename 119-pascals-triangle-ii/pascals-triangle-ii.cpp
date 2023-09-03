class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ans(++rowIndex);
        for (int i = 0; i < rowIndex; ++i)
        {
            for (int j = 0; j < i + 1; ++j)
            {
                if (i > 0 && j > 0 && j < i)
                    ans[i].push_back(ans[i-1][j-1]+ans[i-1][j]);
                else
                    ans[i].push_back(1);
            }
        }
        return ans.back();
    }
};