class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int xs = 0, xe = matrix[0].size() - 1,  ys = 0, ye = matrix.size() - 1;
        int t = matrix[0].size() * matrix.size();
        vector<int> res;
        while(res.size() < t)
        {
            for (int i = xs; i <= xe && res.size() < t; i++) 
                res.push_back(matrix[ys][i]);
            for (int i = ys + 1; i <= ye && res.size() < t; i++) 
                res.push_back(matrix[i][xe]);
            for (int i = xe - 1; i >= xs && res.size() < t; i--) 
                res.push_back(matrix[ye][i]);
            for (int i = ye - 1; i > ys && res.size() < t; i--) 
                res.push_back(matrix[i][xs]);
            xs++, ys++, xe--, ye--;
        }
        return res;
    }
};