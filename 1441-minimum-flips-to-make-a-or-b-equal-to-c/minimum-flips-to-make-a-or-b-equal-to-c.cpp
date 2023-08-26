class Solution {
public:
    int minFlips(int a, int b, int c) {
        int i = -1, ans = 0;
        while (++i < 32)
        {
            if ((1<<i)&c)
                ans += (!((1<<i)&a) && !((1<<i)&b));
            else
                ans += !!((1<<i)&a), ans += !!((1<<i)&b);
        }
        return ans;
    }
};