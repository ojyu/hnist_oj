#include<stdio.h>
#include<stdlib.h>


int main()
{
	int n, m, x, i;
	scanf("%d", &n);
	int* arr = (int*)calloc(n, sizeof(int));
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	scanf("%d", &m);
	for (i = 0; i < m; i++)
	{
		scanf("%d", &x);
		if (arr[x - 1] % 2 == 0)
			printf("yes\n");
		else
			printf("no\n");
	}

	return 0;
}