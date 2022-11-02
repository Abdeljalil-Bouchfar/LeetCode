class Solution {
public:
    int mySqrt(int x) {
    long long	sq = 0;

	while (sq * sq <= x)
	{
		if (sq * sq == x)
			return (sq);
		sq++;
	}
	return (sq - 1);
    }
};