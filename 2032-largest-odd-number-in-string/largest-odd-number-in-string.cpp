class Solution {
public:
    string largestOddNumber(string num) {
        if (num.back() % 2) return num;
        int j = 0;
        for (int i = 0; i < num.size(); ++i)
        {
            if (num[i] % 2)
              j = i + 1;
        }
        return num.substr(0, j);
    }
};