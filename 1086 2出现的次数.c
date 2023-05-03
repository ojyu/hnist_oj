#include<stdio.h>
int main()
{
	unsigned long long n;
	int count = 0;
	scanf("%llu", &n);
	while (n)
	{
		if (n % 10 == 2)
			count++;
		n /= 10;
	}
	printf("%d\n", count);
	return 0;
}