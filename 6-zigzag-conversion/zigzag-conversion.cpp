class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1)
            return s;
        vector<string> vec(numRows, "");
        vec.push_back("");
        int i = 0, dw = 1;
        for (char &c : s)
        {
            if (dw)
            {
                vec[i++] += c;
                if (i == numRows) dw = 0, --i;
            }
            else
            {
                vec[--i] += c;
                if (i == 0) dw = 1, ++i;
            }
        }
        return accumulate(vec.begin(), vec.end(), std::string(""));
    }
};