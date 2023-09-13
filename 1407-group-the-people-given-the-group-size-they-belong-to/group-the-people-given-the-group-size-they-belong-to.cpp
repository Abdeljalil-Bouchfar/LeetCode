class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans;
        vector<vector<int>> hash(501, vector<int>(0));
        for (int i = 0; i < groupSizes.size(); ++i)
            hash[groupSizes[i]].push_back(i);
        for (int i = 1; i < 501; ++i)
        {
            if (!hash[i].empty())
            {
                int t = 0;
                ans.push_back({});
                for(int &n : hash[i])
                {
                    if (t == i)
                        ans.push_back({}), t = 0;
                    ans.back().push_back(n);
                    t++;
                }
            }
        }
        return ans;
    }
};