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
	return 1;
}

int main()
{
	int n = 0;
	int i = 0;
	int num = 2;
	scanf("%d", &n);
	for (i = 0; i < n;)
	{
		if (is_prime(num) == 1)
		{
			printf("%d ", num);
			i++;
		}
		num++;
	}
	return 0;
}