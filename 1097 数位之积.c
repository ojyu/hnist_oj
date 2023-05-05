#include<stdio.h>
int main()
{
	int i = 0;
	int num = 0;
	int temp = 1;
	scanf("%d", &num);
	for (i = 0; i < 5; i++)
	{
		temp *= num % 10;
		num /= 10;
	}
	printf("%d", temp);
	return 0;
}