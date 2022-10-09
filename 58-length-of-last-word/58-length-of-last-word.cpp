class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length() - 1, j = 0;
        for ( ; i >= 0 && s[i] == ' '; i--) ;
        j = i;
        for ( ; j >= 0 && s[j] != ' '; j--) ;
        return i - j;
    }
};