#include<stdio.h>
int main()
{
	int d = 0;
	scanf("%d", &d);
	if (d == 5)
		printf("%d", 7);
	else
		printf("%d", (d + 2) % 7);
	return 0;
}