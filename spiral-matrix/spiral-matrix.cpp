class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int xs = 0, xe = matrix[0].size() - 1,  ys = 0, ye = matrix.size() - 1;
        vector<int> res;
        while(res.size() < matrix[0].size() * matrix.size())
        {
            for (int i = xs; i <= xe; i++) 
                res.push_back(matrix[ys][i]);
            for (int i = ys + 1; i <= ye; i++) 
                res.push_back(matrix[i][xe]);
            for (int i = xe - 1; i >= xs; i--) 
                res.push_back(matrix[ye][i]);
            for (int i = ye - 1; i > ys; i--) 
                res.push_back(matrix[i][xs]);
            xs++, ys++, xe--, ye--;
        }
        while(res.size() > matrix[0].size() * matrix.size())
            res.pop_back();
        return res;
    }
};