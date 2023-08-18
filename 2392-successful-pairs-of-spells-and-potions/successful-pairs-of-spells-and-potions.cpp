class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans(spells.size());
        sort(potions.begin(), potions.end());
        int n = potions.size();
        for (int j = 0; j < spells.size(); j++)
        {
            int s = 0, e = n;
            while (s <= e)
            {
                int mid = s + ((e - s) / 2);
                if (mid >= 0 && mid < n && (long long)potions[mid] * spells[j] < success)
                    s = mid + 1;
                else
                    e = mid - 1;
            }
            ans[j] = max(n - e - 1, 0);
        }
        return ans;
    }
};