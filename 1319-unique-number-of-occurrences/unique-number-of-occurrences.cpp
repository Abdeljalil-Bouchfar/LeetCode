class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int ocr[2001] = {0};
        int unq[2001] = {0};
        unordered_set<int> s;
        for (int &n : arr)
            ocr[n + 1000]++, s.insert(n);

        for (auto n : s)
        {
            if (unq[ocr[n + 1000]])
                return false;
            unq[ocr[n + 1000]]++;
        }
        return true;
    }
};