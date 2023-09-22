class Solution {
public:
    int reverse(int x) {
        int sign = 1;
        long long n = x;
        if (n < 0)
            n = -n, sign = -1;
        if (n > INT_MAX)
            return 0;
        string s = to_string(n); 
        std::reverse(s.begin(), s.end());
        if (stol(s) > INT_MAX || stol(s) < INT_MIN)
            return 0;
        return stoi(s) * sign;
    }
};