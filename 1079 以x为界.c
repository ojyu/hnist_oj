#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n = 0;
	int i = 0;
	int x = 0;
	int j = 0;
	scanf("%d", &n);
	int sz = n;
	int* p = (int*)calloc(n, sizeof(int));
	for (i = 0; i < n; i++)
		scanf("%d", &p[i]);
	scanf("%d", &x);
	for (i = 0; i < sz; i++)
	{
		int temp = 0;
		if (x > p[i])
		{
			temp = p[i];
			for (j = i; j > 0; j--)
				p[j] = p[j - 1];
			p[0] = temp;
		}
		else
		{
			temp = p[i];
			for (j = i; j < n - 1; j++)
				p[j] = p[j + 1];
			i--;
			sz--;
			p[n - 1] = temp;
		}
	}
	for (i = 0; i < n; i++)
		printf("%d ", p[i]);
	return 0;
}