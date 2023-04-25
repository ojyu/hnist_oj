#include<stdio.h>
int main()
{
	int n, num, i;
	int sum=0;
	scanf("%d" ,&n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num);
		sum += num;
	}
	printf("%d\n", sum);
	return 0;
}