class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res;
        int f = 1;
        int j = 0;
        //cout << strs[0].length() << ' ' << strs.size() << endl;
        for (int j = 0; f && j <= strs[0].length(); j++)
        {
            char c = strs[0][j];
            int i = 0;
            while (i < strs.size() && j <= strs[i].length())
            {
                if (c != strs[i][j] || (j == strs[i].length() && c == strs[i][j] && i + 1 == strs.size()))
                {
                    if (j < strs[0].length() && j == strs[i].length() && c == strs[i][j] && i + 1 == strs.size())
                        j++;
                    res = strs[0].substr(0, j);
                    f = 0;
                    break;
                }
                i++;
            }
            if (strs.size() == 1 || i >= strs.size())
                res = strs[0];
        }
        return res;
    }
};