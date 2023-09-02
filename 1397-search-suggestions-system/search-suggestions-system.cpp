class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        vector<vector<string>> ans;
        sort(products.begin(), products.end());
        string curr;
        for (int j = 0, i= 0; j < searchWord.size(); ++j)
        {
            ans.push_back({});
            curr += searchWord[j];
            i = (lower_bound(products.begin(), products.end(), curr) - products.begin());
            while (i < products.size() && ans.back().size() < 3)
            {
                if (products[i].substr(0, j + 1) == curr)
                    ans.back().push_back(products[i++]);
                else
                    break;
            }               
        }
        return ans;
    }
};