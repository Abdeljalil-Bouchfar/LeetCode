class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i = 0; i < haystack.length(); i++)
        {
            int j = 0;
            if (haystack[i] == needle[j])
                while (j < needle.length() && i + j < haystack.length() && needle[j] == haystack[i + j])
                    j++;
            if (j == needle.length())
                return i;
        }
        return -1;
    }
};