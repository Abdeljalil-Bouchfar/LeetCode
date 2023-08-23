class Solution {
public:
    vector<vector<int>> ans;
    int n;
    void dfs(vector<int>& candidates, vector<int> comps, int &tr, int i, int total)
    {
        if (total == tr) ans.push_back(comps);
        else if (total < tr)
        {
            while (i < n && total + candidates[i] <= tr)
            {
                vector<int> tmp = comps;
                tmp.push_back(candidates[i]);
                dfs(candidates, tmp, tr, i + 1, total + candidates[i]);
                while(i < n && tmp.back() == candidates[i])
                    i++;
            }
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        n = candidates.size();
        sort(candidates.begin(), candidates.end());
        dfs(candidates, {}, target, 0, 0);
        return ans;
    }
};