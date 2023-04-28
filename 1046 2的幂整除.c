#include<stdio.h>
int main()
{
	int n = 0;
	int count = 0;
	scanf("%d", &n);
	while (n)
	{
		if (n % 2 != 0)
			break;
		count++;
		n /= 2;
	}
	printf("%d", count);
	return 0;
}