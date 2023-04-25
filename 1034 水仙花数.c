#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	int sum = 0;
	scanf("%d", &num);
	int temp = num;
	if (num / 100 >= 1 && num / 100 <= 9)
	{
		while (num)
		{
			sum += pow(num % 10, 3);
			num /= 10;
		}
		if (sum == temp)
			printf("yes\n");
		else
			printf("no\n");
	}
	else
		printf("ERROR\n");
	return 0;
}