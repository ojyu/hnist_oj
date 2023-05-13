#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	if (n % 3 == 0 && n % 5 == 0 && n % 7 == 0)
		printf("%d %d %d", 3, 5, 7);
	else if (n % 3 == 0 && n % 5 == 0 && n % 7 != 0)
		printf("%d %d", 3, 5);
	else if (n % 3 == 0 && n % 7 == 0 && n % 5 != 0)
		printf("%d %d", 3, 7);
	else if (n % 5 == 0 && n % 7 == 0 && n % 3 != 0)
		printf("%d %d", 5, 7);
	else if (n % 5 != 0 && n % 7 != 0 && n % 3 == 0)
		printf("%d", 3);
	else if (n % 5 == 0 && n % 7 != 0 && n % 3 != 0)
		printf("%d", 5);
	else if (n % 5 != 0 && n % 7 == 0 && n % 3 != 0)
		printf("%d", 7);
	else
		printf("%c", 'n');




	return 0;
}