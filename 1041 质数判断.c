#include <stdio.h>
#include<math.h>
int main() 
{
	int n, i;
	scanf("%d", &n);
	if (n == 0 || n == 1)
	{
		printf("No\n");
		return 0;
	}
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			printf("No\n");
			break;
		}
	}
	if (i > sqrt(n))
		printf("Yes\n");
	return 0;
}