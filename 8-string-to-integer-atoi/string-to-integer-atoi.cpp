class Solution {
public:
    int myAtoi(string s) {
        long long n = 0;
        int sign = 1, i = 0;

	    while (i < s.size() && s[i] == 32)
            i++;
        
	    if (s[i] == '-')
	    	sign = -1;
	    i += (s[i] == '-' || s[i] == '+');

	    for (; i < s.size() && s[i] >= '0' && s[i] <= '9'; i++)
	    {
	    	n = n * 10 + (s[i] - 48);
            
            if (n > INT_MAX)
                return sign == 1 ? 2147483647 : -2147483648;
	    }
	    return (n * sign);
    }
};