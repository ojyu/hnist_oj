#include<stdio.h>
#include<math.h>

int is_prime(int n)
{
	int i = 0;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return 0;
	}
	return n;
}

int func(int num)
{
	if (num % 2 != 0 && num % 3 != 0 && num % 5 != 0)
		return 0;
	int i = 0;
	for (i = 7; i < num; i++)
	{
		int ret = is_prime(i);
		if (ret != 0)
			if (num % ret == 0)
				return 0;
	}
	return 1;
}

int main()
{
	int n = 0;
	int m = 0;
	int num = 0;
	int count = 0;
	scanf("%d%d", &n, &m);
	for (num = n; num <= m; num++)
	{
		int ret = func(num);
		if (ret == 1)
		{
			printf("%d ", num);
			count++;
		}
	}
	if (count == 0)
		printf("No");
	return 0;
}