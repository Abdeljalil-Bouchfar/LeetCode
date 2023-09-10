class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        long long pow = labs(n);

        if (n < 0) x = 1 / x;

        while(pow)
        {
            if (pow % 2) ans *= x;
            x *= x;
            pow /= 2;
        }
        return ans;
    }
};