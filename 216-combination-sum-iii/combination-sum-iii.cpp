class Solution {
public:
    vector<vector<int>> ans;
    void fn(int k, int n, int i, int t, vector<int> comp)
    {
        if (t == n && comp.size() == k) ans.push_back(comp);
        else if (comp.size() < k && t < n)
        {
            while (i < 10)
            {
                vector<int> tmp = comp;
                tmp.push_back(i);
                fn(k, n, i + 1, t + i, tmp);
                i++;
            }
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        fn(k, n, 1, 0, {});
        return ans;
    }
};