#include<stdio.h>

int main()
{
	int x, y, z;
	int m = 110;
	int n;
	int flag = 0;
	scanf("%d", &n);
	while (m<=999)
	{
		x = m / 100;
		y = m / 10 % 10;
		z = m % 10;
		if (y * 100 + z * 10 + z + m == n)
		{
			flag = 1;
			printf("%d %d %d\n", x, y, z);
		}
		m++;
	}
	if (flag == 0)
	{
		printf("NO\n");
	}

	return 0;
}