#include<stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	double p = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		p += ((1.0 / (4 * i - 3)) - (1.0 / (4 * i - 1)));
	}
	printf("%0.5lf", p * 4);
	return 0;
}