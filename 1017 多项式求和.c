#include<stdio.h>
#include<math.h>
int main()
{
	float a1, a2, a3, a0, x, y;
	scanf("%f %f %f %f %f", &a1, &a2, &a3, &a0, &x);
	y = a1 * pow(x, 3) + a2 * pow(x, 2) + a3 * x + a0;
	printf("%.2f", y);
	return 0;
}