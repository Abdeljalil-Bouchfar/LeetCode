class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char> mp;
        mp[' '] = ' ';
        char a = 'a';
        for (char &c : key)
            if (!mp.count(c))
                mp[c] = a++;
        string ans; 
        for (char &c : message)
            ans += mp[c];
        return ans;
    }
};