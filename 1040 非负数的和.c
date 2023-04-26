#include<stdio.h>
int main()
{
	int n, m, i;
	int sum = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &m);
		if (m < 0)
			break;
		sum += m;
	}
	printf("%d\n", sum);
	return 0;
}