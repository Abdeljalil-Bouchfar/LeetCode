class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            int arr[128] = {0};
            int j = i;
            for (; j < s.size() && arr[s[j]] == 0; j++)
                arr[s[j]] = 1;
            ans = max(ans, j - i);
            if (j == s.size())
                break;
        }
        return ans;
    }
};