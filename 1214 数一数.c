#include<stdio.h>
int main()
{
	int x, y;
	scanf("%d%d", &x, &y);
	if (x % 2 == 0 && y % 2 == 1)
		printf("%d", (y - x + 1) / 2);
	else
		printf("%d", (y - x + 1) / 2 + 1);
	return 0;
}