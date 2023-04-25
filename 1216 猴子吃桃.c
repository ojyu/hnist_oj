#include<stdio.h>
int main()
{
	int n, a, i;
	scanf("%d%d", &n, &a);
	int x = (a - 1) * 2;
	for (i = 1; i < n; i++)
		x = (x - 1) * 2;	
	printf("%d", x);
	return 0;
}
