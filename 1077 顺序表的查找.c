#include<stdio.h>
#include<stdlib.h>


int func(int* p1, int num, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		if (p1[i] == num)
			return i + 1;
	}
	return 0;
}

int main()
{
	int n = 0;
	int i = 0;
	int m = 0;
	scanf("%d", &n);
	int* p1 = (int*)calloc(n, 4);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &p1[i]);
	}
	scanf("%d", &m);
	int* p2 = (int*)calloc(m, 4);
	for (i = 0; i < m; i++)
	{
		scanf("%d", &p2[i]);
	}
	for (i = 0; i < m; i++)
	{
		int ret = func(p1, p2[i], n);
		if (ret == 0)
			printf("No Found!\n");
		else
			printf("%d\n", ret);
	}

	return 0;
}