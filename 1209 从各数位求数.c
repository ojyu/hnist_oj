#include<stdio.h>
#include<math.h>
int main()
{
	int n = 0, x;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &x);
		n += x * pow(10, i);
	}
	printf("%d", 2 * n);
	return 0;
}