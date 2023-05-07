#include<stdio.h>
int main()
{
	int n = 0;
	int m, k, p;
	scanf("%d", &n);
	p = n % 60;
	k = (n - p) / 60 % 60;
	m = n / 3600;
	printf("%d–° ±%d∑÷%d√Î", m, k, p);
	return 0;
}