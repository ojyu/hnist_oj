#include<stdio.h>
int main()
{
	int a, k;
	int s = 0;
	int i = 0;
	int temp = 0;
	scanf("%d%d", &a, &k);
	for (i = 0; i < k; i++)
	{
		temp = temp * 10 + a;
		s += temp;
	}
	printf("%d", s);
	return 0;
}