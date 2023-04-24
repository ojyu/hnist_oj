#include <stdio.h>

int main() {
	char ch = 0;
	scanf("%c", &ch);
	if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
		printf("A");
	else if (ch >= '0' && ch <= '9')
		printf("1");
	else
		printf("#");
	return 0;
}