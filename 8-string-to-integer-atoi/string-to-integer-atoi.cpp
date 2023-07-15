class Solution {
public:
    int myAtoi(string s) {
        long long n = 0;
        int sign = 1, i = 0;

	    while (s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
	    	i++;
        
	    if (s[i] == '-' || s[i] == '+')
	    {
	    	if (s[i] == '-')
	    		sign = -1;
	    	i++;
	    }

	    for (; i < s.size() && s[i] >= '0' && s[i] <= '9'; i++)
	    {
	    	n = n * 10 + (s[i] - 48);
            if (n * sign >= INT_MAX)
                return 2147483647;
            else if (n * sign <= INT_MIN)
                return -2147483648;
	    }
	    return (n * sign);
    }
};