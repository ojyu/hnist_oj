#include<stdio.h> 

int main() {
	float a, b, c, d;
	scanf("%f%f%f", &a, &b, &c);
	d = 0.2 * a + 0.3 * b + 0.5 * c;
	printf("%.1f", d);
	return 0;
}