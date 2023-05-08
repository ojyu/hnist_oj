#include<stdio.h>
#include<math.h>
int main()
{
	int n = 0;
	int i = 0;
	int temp = 0;
	scanf("%d", &n);
	for (i = 0; i < 5; i++)
	{
		temp += pow(10, 4 - i) * (n % 10);
		n /= 10;
	}
	printf("%d", temp);
	return 0;
}