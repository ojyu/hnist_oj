#include<stdio.h>

int main()
{
	char str[20];
	int count = 0;
	while (scanf("%s", str) != EOF)
		count++;
	printf("%d", count);

	return 0;
}