class Solution {
public:
    unordered_map<char, string> keyboard;
    vector<string> ans;
    void solve(string &digits, string comp, int index)
    {
        if (index == digits.size())
            ans.push_back(comp);
        else
        {
            string chars = keyboard[digits[index]];
            for (int i = 0; i < chars.size(); i++)
            {      
                comp.push_back(chars[i]);
                solve(digits, comp, index + 1);
                comp.pop_back();
            }
        }
    }
    vector<string> letterCombinations(string digits) {
        keyboard['2'] = "abc";
        keyboard['3'] = "def";
        keyboard['4'] = "ghi";
        keyboard['5'] = "jkl";
        keyboard['6'] = "mno";
        keyboard['7'] = "pqrs";
        keyboard['8'] = "tuv";
        keyboard['9'] = "wxyz";
        if (digits.size()) solve(digits, "", 0);
        return ans;
    }
};