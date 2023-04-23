#include<stdio.h>
#include<math.h>
int main()
{
	float A, B;
	scanf("%f%f", &A, &B);
	printf("%.1f",fabs(A) + fabs(B));
	return 0;
}