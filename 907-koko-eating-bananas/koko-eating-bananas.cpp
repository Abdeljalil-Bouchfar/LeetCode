class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int s = 1, e = *max_element(piles.begin(), piles.end());
        while (s <= e)
        {
            int mid = s + (e - s) / 2;
            
            long th = 0;
            for(int &p : piles)
                th+= (p / mid) + (p % mid > 0);

            if (th <= h) e = mid - 1;
            else s = mid + 1;
        }
        return s;
    }
};