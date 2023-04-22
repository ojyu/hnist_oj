#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, m;
	int i;
	int day = 0;
	int count = 0;
	scanf("%d%d", &n, &m);
	int* p = calloc(n, sizeof(int));
	for (i = 0; i < n; i++)
	{
		scanf("%d", p + i);
		if (day < p[i])
		{
			day = p[i] + m-1;
			count+=m;
		}
	}
	printf("%d", count);
	return 0;
}