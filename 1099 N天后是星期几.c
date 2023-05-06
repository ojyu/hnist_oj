#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	if (n % 7 == 3)
		printf("%d", 7);
	else
		printf("%d", (n % 7 + 4) % 7);
	return 0;
}