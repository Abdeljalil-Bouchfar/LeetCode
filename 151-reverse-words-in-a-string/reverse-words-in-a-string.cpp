class Solution {
public:
    string reverseWords(string s) {
        int l = s.size();
        string res;
        while (l--)
        {
            while (l > 0 && s[l] == ' ')
                l--;
            int i = l;
            while (i > 0 && s[i - 1] != ' ')
                i--;
            l = i;
            while (s[i] != ' ' && i < s.size())
                res += s[i++];
            while (l > 0 && s[l - 1] == ' ')
                l--;
            if (l > 0)
                res += ' ';
        }
        return res;
    }
};