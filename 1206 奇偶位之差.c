#include<stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	int temp = 0;
	int j = 1;
	scanf("%d", &n);
	for (i = 0; i < 8; i++)
	{
		temp -= (n % 10) * j;
		j = -j;
		n /= 10;
	}
	printf("%d", temp);
	return 0;
}