class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        for (int i = 0, l = s.length() - 1;i < l; i++, l--)
        {
            if (s[i] != s[l])
                return false;
        }
        return true;
    }
};