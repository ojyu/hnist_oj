#include <stdio.h>
int main() {
	int n = 0;
	scanf("%d", &n);
	if (n % 2) 
		printf("odd");
	else 
		printf("even");
	return 0;
}