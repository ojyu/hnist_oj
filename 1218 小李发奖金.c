#include<stdio.h>
#include<stdlib.h>

int cmp_by_int(const void* e1, const void* e2)
{
	return *((int*)e1) - *((int*)e2);
}

int main()
{
	int n, i;
	int sum = 0;
	scanf("%d", &n);
	int* p = (int*)calloc(n, sizeof(int));
	for (i = 0; i < n; i++)
		scanf("%d", p + i);
	qsort(p, n, sizeof(int), cmp_by_int);
	for (i = 0; i < n - 1; i++)
	{
		int count = 0;
		if (p[i]>=p[i + 1])
		{
			count= p[i] + 1 - p[i + 1];
			p[i + 1] = p[i] + 1;
		}
		sum += count;
	}
	printf("%d\n", sum);
	return 0;
}