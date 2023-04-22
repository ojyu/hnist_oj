#include<stdio.h>
int main()
{
	float Xa, Ya;
	float Xb, Yb;
	scanf("%f%f", &Xa, &Ya);
	scanf("%f%f", &Xb, &Yb);
	printf("%0.2f %0.2fi", Xa + Xb, Ya + Yb);
	return 0;
}