#include <stdio.h>

int main() {
	int a, b;
	char op;
	scanf("%d%c%d", &a, &op, &b);
	if (op == '+') 
		printf("%d\n", a + b);
	else if (op == '-') 
		printf("%d\n", a - b);
	else if (op == '*') 
		printf("%d\n", a * b);
	else if (op == '/') {
		if (b != 0)
			printf("%.1f\n", (float)a / b);
		else
			printf("-1");
	}
	else
		printf("-1");
	return 0;
}