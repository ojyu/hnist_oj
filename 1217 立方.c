#include<stdio.h>
int main()
{
	int n;
	int i = 1;
	int count = 0;
	scanf("%d", &n);
	while (i * i * i <= n)
	{ 
		count++;
		i++;
	}
	printf("%d", count);
	return 0;
}