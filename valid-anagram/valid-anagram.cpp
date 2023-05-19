class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        regex p("^" + s + "$");
        return regex_match(t, p);
    }
};