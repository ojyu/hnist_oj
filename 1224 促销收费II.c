#include<stdio.h>
int main()
{
	int N;
	int m = 0;
	scanf("%d", &N);
	int temp = N;
	while (temp>=300)
	{
		if (temp - 500 >= 0)
		{
			m += 240;
			temp -= 500;
		}
		else if (temp - 300 >= 0)
		{
			m += 120;
			temp -= 300;
		}
	}
	printf("%d\n", N - m);
	return 0;
}