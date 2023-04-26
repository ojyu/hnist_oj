#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	while (n)
	{
		printf("%c", '_');
		n--;
	}
	return 0;
}