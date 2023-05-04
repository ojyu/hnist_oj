#include<stdio.h>
#include<stdlib.h>

int cmp_by_int(const void* e1, const void* e2)
{
	return *((int*)e1) - *((int*)e2);
}

int main()
{
	int n = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int count = 0;
	scanf("%d", &n);
	int* p = (int*)calloc(n, sizeof(int));
	for (i = 0; i < n; i++)
		scanf("%d", &p[i]);
	qsort(p, n, sizeof(int), cmp_by_int);
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			for (k = j + 1; k < n; k++)
			{
				if (p[i] + p[j] == p[k])
					count++;
			}
		}
	}
	printf("%d\n", count);

	return 0;
}