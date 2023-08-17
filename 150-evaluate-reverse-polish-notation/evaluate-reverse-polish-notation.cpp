class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int n1, n2;
        for (string &s : tokens)
        {
            if (s.size() == 1 && !isdigit(s[0]))
            {
                n1 = st.top(), st.pop();
                n2 = st.top(), st.pop();
                if (s == "+")
                    st.push(n2 + n1);
                else if (s == "-")
                    st.push(n2 - n1);
                else if (s == "*")
                    st.push(n2 * n1);
                else if (s == "/")
                    st.push(n2 / n1);
            }
            else
                st.push(stoi(s));
        }
        return st.top();
    }
};