#include<stdio.h>
int main()
{
	int a, b, c, d, e;
	int count = 0;
	for (a = 1; a <= 9; a++)
	{
		for (b = 1; b <= 9; b++)
		{
			if (b == a)
				continue;
			for (c = 1; c <= 9; c++)
			{
				if (c == b || c == a)
					continue;
				for (d = 1; d <= 9; d++)
				{
					if (d == c || d == b || d == a)
						continue;
					for (e = 1; e <= 9; e++)
					{
						if (e == d || e == c || e == b || e == a)
							continue;
						if ((a * 10 + b) * (c * 100 + d * 10 + e) == (c * 10 + e) * (a * 100 + d * 10 + b))
							count++;
					}
				}
			}
		}
	}
	printf("%d", count);
	return 0;
}