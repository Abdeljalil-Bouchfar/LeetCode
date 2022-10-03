class Solution {
public:
	string pushDominoes(string dm)
	{
		int len = dm.length();
		for (int i = 0; i < len; i++)
		{
			int l = 0, r = 0;
			if (dm[i] == 'L')
			{
				l = i - 1;
				while (l >= 0 && dm[l] == '.')
					dm[l--] = 'L';
			}
			else if (dm[i] == 'R')
			{
				r = i;
				while (r + 1 < len && dm[r + 1] == 'R')
					r++;
				while (i++ < len)
				{
					if (dm[i] == 'R')
					{
						while (r < i)
							dm[r++] = 'R';
					}
					if (dm[i] == 'L')
					{
						l = i;
						break;
					}
				}
				if (l == 0)
				{
					while (r++ < len)
						dm[r] = 'R';
				}
				else
				{
					while (r + 1 < l - 1)
					{
						dm[++r] = 'R';
						dm[--l] = 'L';
					}
				}
			}
		}
		return dm;
	}
};