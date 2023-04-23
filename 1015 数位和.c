#include <stdio.h>
int main() {
	int num = 0;
	int x, y, z;
	scanf("%d", &num);
	x = num / 100;
	y = num / 10 % 10;
	z = num % 10;
	printf("%d %d %d\n", x, y, z);
	printf("%d", x + y + z);
	return 0;
}