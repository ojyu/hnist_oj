#include<stdio.h>
int main()
{
	int n, m, i;
	float sum = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &m);
		sum += m;
	}
	printf("%.2f\n", sum / n);
}