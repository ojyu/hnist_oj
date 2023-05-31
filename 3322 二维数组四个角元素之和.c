#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	scanf("%d", &n);
	int* p = calloc(n * n, sizeof(int));
	int i = 0;
	for (i = 0; i < n * n; i++)
		scanf("%d", &p[i]);
	printf("%d", p[0] + p[n - 1] + p[(n - 1) * n] + p[n * n - 1]);
	return 0;
}