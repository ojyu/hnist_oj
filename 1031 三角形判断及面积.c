#include<stdio.h>
#include<math.h>
float area(int a, int b, int c)
{
	float p = (a + b + c) / 2.0;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

void sort(int* pa, int* pb, int* pc)
{
	int max = *pa > *pb ? *pa : *pb;
	max = *pc > max ? *pc : max;
	int min = *pa < *pb ? *pa : *pb;
	min = *pc < min ? *pc : min;
	int mid = *pa + *pb + *pc - max - min;
	*pa = min;
	*pb = mid;
	*pc = max;
}

int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	sort(&a, &b, &c);
	if (a + b > c)
	{
		if (a * a + b * b - c * c > 0)
			printf("锐角三角形\n%0.2f", area(a, b, c));
		else if (a * a + b * b - c * c < 0)
			printf("钝角三角形\n%0.2f", area(a, b, c));
		else
			printf("直角三角形\n%0.2f", area(a, b, c));
	}
	else
		printf("ERROR\n");
}
