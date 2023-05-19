#include<stdio.h>
int main()
{
	unsigned int x = 0;
	scanf("%u", &x);
	if (x <= 1)
		printf("Today, I ate %u apple.", x);
	else
		printf("Today, I ate %u apples.", x);
	return 0;
}