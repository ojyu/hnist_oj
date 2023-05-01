#include<stdio.h>
int func(n)
{
	if (n < 2)
		return n;
	else
		return func(n - 1) + func(n - 2);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = func(n);
	printf("%d", ret);
	return 0;
}