#include<stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	int count = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		int num = i;
		while (num)
		{
			if (num % 10 == 9)
				count++;
			num /= 10;
		}

	}
	printf("%d", count);
	return 0;
}