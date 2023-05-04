#include<stdio.h>

void func(int n)
{
	static int i = 4;
	while (i > 0)
	{
		i--;
		func(n / 10);
		printf("%d\n", n % 10);
	}
}
int main()
{
	float x = 0;
	int n = 0;
	scanf("%f", &x);
	n = 10000 * x;
	func(n);
	return 0;
}