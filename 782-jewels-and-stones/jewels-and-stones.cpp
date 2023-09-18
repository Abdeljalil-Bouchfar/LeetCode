class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int hash[200] = {0};
        for (char &c : jewels)
            hash[c] = 1;
        int ans = 0;
        for (char &c : stones)
            ans += hash[c];
        return ans;
    }
};