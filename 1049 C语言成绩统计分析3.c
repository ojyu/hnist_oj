#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, m, i;
	scanf("%d", &n);
	int* a = (int*)calloc(n, sizeof(int));
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	scanf("%d", &m);
	for (i = 0; i < m; i++)
	{
		int x = 0;
		scanf("%d", &x);
		int j = 0;
		for (j = 0; j < n; j++)
		{
			if (a[j] == x)
			{
				printf("yes\n");
				break;
			}
		}
		if (j == n)
			printf("no\n");
	}
	return 0;
}