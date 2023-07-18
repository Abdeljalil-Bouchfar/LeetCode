class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for (int i = 0; i < flowerbed.size() - 0; i++)
            if (((i > 0 && i + 1 < flowerbed.size() && !flowerbed[i - 1] && !flowerbed[i + 1]) 
                || (i == 0 && ((i + 1 < flowerbed.size() && !flowerbed[i + 1]) || flowerbed.size() == 1))
                || (i + 1 == flowerbed.size() && i > 0 && !flowerbed[i - 1])) && !flowerbed[i])
                flowerbed[i] = 1, n--;
        return n <= 0;
    }
};