class Solution {
public:
    vector<vector<int>> ans;
    void dfs(vector<int>& candidates, vector<int> comps, int &tr, int i, int total)
    {
        if (total == tr) ans.push_back(comps);
        else if (total < tr && i < candidates.size())
        {
            dfs(candidates, comps, tr, i + 1, total);
            comps.push_back(candidates[i]);
            dfs(candidates, comps, tr, i, total + candidates[i]);
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       dfs(candidates, {}, target, 0, 0);
       return ans;
    }
};