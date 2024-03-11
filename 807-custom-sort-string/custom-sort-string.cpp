class Solution {
public:
    string customSortString(string order, string s) {
        int hash[26] = {0};
        int val = -26;
        for (char &c : order)
            hash[c - 'a'] = val++;
        sort(s.begin(), s.end(), [&hash](char &c1, char c2)
        {
            return hash[c1 - 'a'] < hash[c2 - 'a'];
        });
        return s;
    }
};