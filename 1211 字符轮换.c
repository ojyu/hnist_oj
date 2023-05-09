#include<stdio.h>
int main()
{
	int n = 0;
	char ch = 0;
	scanf("%c", &ch);
	scanf("%d", &n);
	if (n + ch <= 122)
		printf("%c", n + ch);
	else
		printf("%c", n + ch - 26);
	return 0;
}