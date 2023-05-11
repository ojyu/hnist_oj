#include<stdio.h>
int main()
{
	int a, b;
	int c, d;
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);
	printf("%d %d", ((c * 60 + d) - (a * 60 + b)) / 60, ((c * 60 + d) - (a * 60 + b)) % 60);
	return 0;
}