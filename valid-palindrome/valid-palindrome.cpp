class Solution {
public:
    bool isPalindrome(string s) {
        int b = 0, e = s.length() - 1;
        while (b < e)
        {
            while(b < e && !(isalpha(s[b]) || isdigit(s[b])))
                b++;
            while(b < e && !(isalpha(s[e]) || isdigit(s[e])))
                e--;
            if(tolower(s[e]) != tolower(s[b]))
                return false;
            b++, e--;        
        }
        return true;
    }
};