class Solution {
public:
    // key is the origin val.first is the distenation and val.second is the value
    unordered_map<string, vector<pair<string, double>>> dir;
    double res = -1.0f;
    void solve(string curr, string target, double tmp, unordered_map<string, bool> vis)
    {
        if (curr == target)
            res = tmp;
        else
        {
            vis[curr] = true;
            for (auto p : dir[curr])
                if (!vis[p.first])
                    solve(p.first, target, tmp * p.second, vis);
        }
    }

    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        unordered_map<string, bool> vis;
        for (int i = 0; i < values.size(); ++i)
        {
            string c1 = equations[i][0];
            string c2 = equations[i][1];
            if (dir.count(c1) == 0)
                dir[c1] = {};
            if (dir.count(c2) == 0)
                dir[c2] = {};
            dir[c1].push_back({c2, values[i]});
            dir[c2].push_back({c1, 1.0f/values[i]});
            vis[c1] = false, vis[c2] = false;
        }

        vector<double> ans(queries.size(), -1.0f);
        for (int i = 0; i < queries.size(); ++i)
        {
            string c1 = queries[i][0];
            string c2 = queries[i][1];
            res = -1.0f;
            if (dir.count(c1) && dir.count(c2))
            {
                if (c1 == c2)
                    ans[i] = 1.0f;
                else
                    solve(c1, c2, 1.0f, vis), ans[i] = res;
            }
        }
        return ans;
    }
};