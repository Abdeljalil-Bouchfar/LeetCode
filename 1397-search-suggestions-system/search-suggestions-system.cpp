class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        int n = searchWord.size();
        vector<vector<string>> ans(n);
        sort(products.begin(), products.end());
        string curr;
        for (int j = 0, i= 0; j < n; ++j)
        {
            curr += searchWord[j];
            i = (lower_bound(products.begin(), products.end(), curr) - products.begin());
            while (i < products.size() && ans[j].size() < 3)
            {
                if (products[i].substr(0, j + 1) == curr)
                    ans[j].push_back(products[i++]);
                else
                    break;
            }               
        }
        return ans;
    }
};