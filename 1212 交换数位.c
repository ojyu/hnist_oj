#include<stdio.h>
#include<math.h>
int main()
{
	int a, b;
	int n = 12345678;
	int m = 12345678;
	int i = 0;
	int x, y;
	scanf("%d%d", &a, &b);
	for (i = 0; i < 8; i++)
	{
		if (i + 1 == a)
		{
			x = (n % 10);
			m = m - (n % 10) * pow(10, i);
		}
		else if (i + 1 == b)
		{
			y = (n % 10);
			m = m - (n % 10) * pow(10, i);
		}
		n /= 10;
	}
	printf("%d", (int)(m + x * pow(10, b - 1) + y * pow(10, a - 1)));
	return 0;
}