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
		printf("%d\n", a[x - 1]);
	}
	return 0;
}