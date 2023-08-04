class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int hash_s[256] = {0};
        int hash_t[256] = {0};
        for (int i = 0; i < s.size(); i++)
        {
            if ((hash_t[t[i]] && hash_t[t[i]] != s[i]) || (hash_s[s[i]] && hash_s[s[i]] != t[i]))
                return false;
            hash_s[s[i]] = t[i];
            hash_t[t[i]] = s[i];
        }
        return true;
    }
};