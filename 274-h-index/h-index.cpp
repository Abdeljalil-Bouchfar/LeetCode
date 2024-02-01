class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end(), [](int n1, int n2){
            return n1 > n2;
        });
        int i = 0;
        for (i = 0; i < citations.size(); ++i)
        {
            if (i + 1 > citations[i])
                break;
        }
        return i;
    }
};