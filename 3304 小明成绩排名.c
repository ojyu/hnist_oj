#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int* p = (int*)calloc(n, sizeof(int));
	int i = 0;
	int count1 = 1;
	int count2 = 1;
	int num = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", p + i);
		num += p[i];
	}
	for (i = 1; i < n; i++)
	{
		if (p[0] < p[i])
			count1++;
		if (p[0] <= p[i])
			count2++;
	}
	printf("%d\n%d\n%0.1f", count1, count2, (float)num / n);
	return 0;
}