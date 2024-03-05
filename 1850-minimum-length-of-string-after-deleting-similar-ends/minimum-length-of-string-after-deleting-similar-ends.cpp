class Solution {
public:
    int minimumLength(string s) {
        int size = s.size();
        int b = 0, e = size - 1;
        while (b < e && b < s.size() && e > 0 && s[b] == s[e])
        {
            char c = s[b];
            while (b <= e && c == s[b])
                b++, size--;
            while (e > b && c == s[e])
                e--, size--;
        }
        return size;
    }
};