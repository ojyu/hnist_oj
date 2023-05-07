#include<stdio.h>
#include<math.h>
int main()
{
	int l, d;
	scanf("%d%d", &l, &d);
	printf("%d\n", 2 * (l + d));
	printf("%d\n", l * d);
	printf("%0.2f\n", sqrt((float)l * l + (float)d * d));
	return 0;
}