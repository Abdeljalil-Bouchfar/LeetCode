class Solution {
public:
    bool ispossible(vector<int>& piles, int k, int h)
    {
        long th = 0;
        for(int &p : piles)
            th+= (p / k) + (p % k > 0);

        return (th <= h);
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int s = 1, e = *max_element(piles.begin(), piles.end());
        while (s <= e)
        {
            int mid = s + (e - s) / 2;
            if (ispossible(piles, mid, h)) e = mid - 1;
            else s = mid + 1;
        }
        return s;
    }
};