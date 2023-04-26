#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	while (n)
	{
		printf("%d ", n--);
	}
	return 0;
}