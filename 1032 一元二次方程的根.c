#include <stdio.h>
#include<math.h>

int main() {
	float temp;
	int x1, x2;
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	temp = pow(b, 2) - 4.0 * a * c;
	if (temp > 0)
	{
		x1 = round((-b + sqrt(temp)) / (2 * a));
		x2 = round((-b - sqrt(temp)) / (2 * a));
		printf("%d ", x1 < x2 ? x1 : x2);
		printf("%d ", x1 > x2 ? x1 : x2);
	}
	else if (temp == 0)
	{
		x1 = round((-b + sqrt(temp)) / (2 * a));
		printf("%d", x1);
	}
	else
		printf("error");
	return 0;
}