#include<stdio.h>
#include <stdio.h>
int main()
{
	int n = 0;
	int x = 0;
	int y = 0;
	int num = 0;
	scanf("%d%d%d", &n, &x, &y);
	num = (int)(n - (float)y / x);
	if (num < 0)
		printf("%d", 0);
	else
		printf("%d", num);


}