#include<stdio.h>
int main()
{
	int x, y, z;
	for (x = 1; x < 20; x++)
	{
		for (y = 1; y < 20; y++)
		{
			for (z = 1; z < 20; z++)
			{
				if (x * x + 5 * y * y == z * z)
				{
					printf("%d %d %d\n", x, y, z);
				}
			}
		}
	}
	return 0;
}