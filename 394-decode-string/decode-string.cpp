class Solution {
public:
    string decodeString(string s) {
        string ans;
        int nb = 0;
        stack<pair<int, string>> st;
        for (char &c : s)
        {
            if (isdigit(c))
                nb = (nb * 10) + (c - '0');
            else if (isalpha(c))
                ans += c;
            else if (c == '[')
                st.push({nb, ans}), ans = "", nb = 0;
            else if (c == ']')
            {
                string tmp = ans;
                while (--st.top().first)
                    tmp += ans;
                ans = st.top().second + tmp;
                st.pop();
            }
        }
        return ans;
    }
};