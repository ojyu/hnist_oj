#include<stdio.h>

int func()
{
	int s1 = 0;
	int s2 = 0;
	int num;
	scanf("%d", &num);
	while (num)
	{
		s1 += num % 10;
		s2 += num / 10 % 10;
		num /= 100;
	}
	if (s1 % 11 == s2 % 11)
		return 1;
	return 0;
}

int main()
{
	int n;
	int i = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		if (func() == 1)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}