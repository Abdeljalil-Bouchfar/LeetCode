class Solution {
public:
    vector<string> ans;
    void solve(string curr, int n, int op, int cl)
    {
      if (curr.size() == n*2) 
        ans.push_back(curr);
      else 
      {
        if (op < n) solve(curr + '(', n, op+1, cl);
        if (op > cl) solve(curr + ')', n, op, cl+1);
      }
    }

    vector<string> generateParenthesis(int n) {
        solve("", n, 0, 0);
        return ans;
    }
};