class Solution {
public:
    string largestGoodInteger(string num) {
        char mem[2] = {num[0], num[1]};
        string ans = "";
        for (int i = 2; i < num.size(); ++i)
        {
            if (num[i] == mem[0] && num[i] == mem[1] && (ans.empty() || ans[0] < num[i]))
                ans = num.substr(i-2, 3);
            mem[0] = mem[1], mem[1] = num[i];
        }
        return ans;
    }
};