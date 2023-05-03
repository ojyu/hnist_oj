#include<stdio.h>

int main()
{
	int a = 0;
	int count = 0;
	scanf("%d", &a);
	if (a == 0)
		printf("%d\n", 1);
	else
	{
		while (a)
		{
			if (a % 10 == 0)
				count++;
			a /= 10;
		}
		printf("%d\n", count);
	}
	return 0;
}