#include<stdio.h>

void func(int n)
{
	if (n > 1)
		func(n / 2);
	printf("%d", n % 2);
}
int main()
{
	int n;
	scanf("%d", &n);
	func(n);
	return 0;
}