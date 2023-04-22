#include<stdio.h>
int main()
{
	float Xa, Ya, Xb, Yb;
	scanf("%f%f%f%f", &Xa, &Ya,&Xb,&Yb);
	printf("%.2f\n", (Yb - Ya) / (Xb - Xa));
	return 0;
}