class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string ans;
        for (int i = 0; i < path.size(); ++i)
        {
            if (path[i] == '/')
                continue;
            
            string tmp;
            while (path[i] != '/' && i < path.size())
                tmp += path[i++];
            
            if (tmp != ".")
            {
                if (tmp == ".." && !st.empty())
                    st.pop();
                else if (tmp != "..")
                    st.push(tmp);
            }
        }

        while (!st.empty())
        {
            ans = '/' + st.top() + ans;
            st.pop();
        }
        if (ans.empty()) ans = "/";
        return ans;
    }
};