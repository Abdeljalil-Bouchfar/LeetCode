class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        vector<int> arr(strs.size(), 1);
        for (int i = 0; i < strs.size(); i++)
        {
            vector<string> tmp;
            if (arr[i])
                tmp.push_back(strs[i]);
            sort(strs[i].begin(), strs[i].end());
            for (int j = i + 1; j < strs.size() && arr[i]; j++)
            {
                if(strs[i].size() == strs[j].size())
                {
                    string s = strs[j];
                    sort(s.begin(), s.end());
                    if (s == strs[i])
                        tmp.push_back(strs[j]), arr[j] = 0;
                }
            }
            if (!tmp.empty())
                ans.push_back(tmp);
            arr[i] = 0;
        }
        return ans;
    }
};