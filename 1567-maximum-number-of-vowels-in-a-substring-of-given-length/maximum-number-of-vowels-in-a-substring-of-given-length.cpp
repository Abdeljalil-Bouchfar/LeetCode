class Solution {
public:
    int maxVowels(string s, int k) {
        int ans = 0, curr = 0;
        for(int i = 0; i < s.length();i++)
        {
            curr += s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u';
            curr -= i >= k && (s[i - k] == 'a' || s[i - k] == 'e' || s[i - k] == 'i' || s[i - k] == 'o' || s[i - k] == 'u');
            ans = max(ans, curr);
        }
        return ans;
    }
};