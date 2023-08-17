class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (string s : tokens)
        {
            int n1, n2;
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