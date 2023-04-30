#include<stdio.h>
void func(int n)
{
	if (n / 8)
		func(n / 8);
	printf("%d", n % 8);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	func(n);
	return 0;
}