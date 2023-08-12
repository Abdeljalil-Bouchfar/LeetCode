class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> a;
        unordered_map<string, char> p;
        istringstream iss(s);
        string word;
        int i = 0;
        while (iss >> word)
        {
            if (i == pattern.size() || (a.count(pattern[i]) && a[pattern[i]] != word)
                                    || (p.count(word) && p[word] != pattern[i]))
                return false;
            p[word] = pattern[i], a[pattern[i++]] = word;
        }
        return i == pattern.size();
    }
};