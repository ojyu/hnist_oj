#include<stdio.h>
int main()
{
	int n = 0;
	int m = 1;
	scanf("%d", &n);
	while (n)
	{
		m *= n;
		n -= 1;
	}
	printf("%d", m);
	return 0;
}