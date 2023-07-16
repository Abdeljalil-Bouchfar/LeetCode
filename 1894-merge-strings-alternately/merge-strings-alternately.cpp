class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int w1 = 0, w2 = 0;
        for (int i = 0; i < word1.size() + word2.size(); i++)
        {
            if (w1 < word1.size()) ans += word1[w1++];
            if (w2 < word2.size()) ans += word2[w2++];
        }
        return ans;
    }
};