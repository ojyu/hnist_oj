#include<stdio.h>


int is_leap_year(int n)
{
	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
		return 1;
	else
		return 0;
}
int main()
{
	int year = 0;
	int mon = 0;
	scanf("%d%d", &year, &mon);
	if (is_leap_year(year) == 1)
	{
		if (mon == 2)
			printf("%d", 29);
		else if ((mon == 1) || (mon == 3) || (mon == 5) || (mon == 7) || (mon == 8) || (mon == 10) || (mon == 12))
			printf("%d", 31);
		else
			printf("%d", 30);

	}
	else
	{
		if (mon == 2)
			printf("%d", 28);
		else if ((mon == 1) || (mon == 3) || (mon == 5) || (mon == 7) || (mon == 8) || (mon == 10) || (mon == 12))
			printf("%d", 31);
		else
			printf("%d", 30);
	}
	return 0;
}