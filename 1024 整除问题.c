#include<stdio.h>
int main()
{
	int A, B;
	scanf("%d%d", &A, &B);
	if (B != 0 && A % B == 0)
		printf("yes");
	else
		printf("no");
	return 0;
}