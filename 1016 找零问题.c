#include<stdio.h>
int main()
{
	int x;
	int y, z;
	scanf("%d", &x);
	y = (50 - x) / 10;
	z = (50 - x) % 10;
	printf("%d\n%d", y, z);
	return 0;
}