class Solution {
public:
    int maxVowels(string s, int k) {
        string vowl = "aeiou";
        int max = 0;
        int tm = -1;
        for(int i = 0; i < s.length();i++)
        {
            if (tm == -1 && vowl.find(s[i]) != -1)
            {
                tm = 0;
                for(int j = 0; j < k && j + i < s.length(); j++)
                    if (vowl.find(s[i + j]) != -1)
                        tm++;
                i += k;
                max = tm;
            }
            if (tm != -1)
            {
                tm -= (vowl.find(s[i - k]) != -1);
                tm += (vowl.find(s[i]) != -1);
            }
            if (tm > max)
                max = tm;
        }
        return max;
    }
};