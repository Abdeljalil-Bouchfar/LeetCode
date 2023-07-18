class Solution {
public:
    string reverseVowels(string s) {
        string t = "aeiouAEIOU";
        string v;
        for (char &c : s)
            if (t.find(c) != -1) v += c;
        for (char &c : s)
            if (t.find(c) != -1) c = v.back(), v.pop_back();

        return s;
    }
};