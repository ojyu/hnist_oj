#include<stdio.h>
#include<math.h>

int func(int n)
{
	int num = sqrt(n);
	if (sqrt(n) - num == 0)
		return 1;
	return 0;
}

int main()
{
	int n, i;
	scanf("%d", &n);
	for (i = n; i > 0; i--)
	{
		if (func(i) == 1 && n % i == 0)
		{
			printf("%d\n", i);
			break;
		}
	}
	return 0;
}