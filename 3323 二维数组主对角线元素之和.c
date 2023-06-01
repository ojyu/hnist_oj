#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, i, j;
	int sum = 0;
	scanf("%d", &n);
	int** p = (int**)calloc(n, sizeof(int*));
	for (i = 0; i < n; i++)
		p[i] = (int*)calloc(n, sizeof(int));
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &p[i][j]);
			if (i == j)
				sum += p[i][j];
		}
	}
	printf("%d", sum);
	return 0;
}