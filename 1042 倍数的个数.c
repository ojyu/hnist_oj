#include<stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	int count = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0)
			count++;
	}
	printf("%d", count);
	return 0;
}