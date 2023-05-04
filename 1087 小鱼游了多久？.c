#include<stdio.h>
int main()
{
	int a, b;
	int c, d;
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);
	printf("%d", (c * 60 + d) - (a * 60 + b));
	return 0;
}