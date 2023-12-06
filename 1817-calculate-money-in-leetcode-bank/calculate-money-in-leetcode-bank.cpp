class Solution {
public:
    int totalMoney(int n) {
        int ans = 0, i = 0, c = 1;
        while (n--)
        {
            ans += c++, ++i;
            if (i % 7 == 0) c -= 6;
        }
        return ans;
    }
};