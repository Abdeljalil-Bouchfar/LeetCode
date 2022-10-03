class Solution {
public:
    int numDecodings(string s) {
        if (s[0] == '0')
            return 0;
        int n = 1, f1 = 1, f2 = 1;
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] == '0' && (s[i - 1] > '2' || s[i - 1] == '0'))
                return 0;
            if((s[i - 1] == '1' || (s[i - 1] == '2' && s[i] <= '6')) && s[i] != '0' && s[i + 1] != '0')
            {
                f2 += f1;
                f1 = f2 - f1;
            }
            else if (f2 != 1)
            {
                n *= f2;
                f2 = f1 = 1;
            }
            
        }
       if (f2 != 1)
            n *= f2;
        return n;
    }
};