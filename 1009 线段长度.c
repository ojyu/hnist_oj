#include<stdio.h>
#include<math.h>
int main()
{
	float Xa, Ya, Xb, Yb;
	scanf("%f%f%f%f", &Xa, &Ya, &Xb, &Yb);
	printf("%.2f\n", sqrt(pow((Yb - Ya),2)+pow((Xb - Xa),2)));
    return 0;
}