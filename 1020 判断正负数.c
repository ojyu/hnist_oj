#include <stdio.h>
int main() {
	int k = 0;
	scanf("%d", &k);
	if (k > 0)
		printf("positive");
	else if (k == 0) 
		printf("zero");
	else
		printf("negative");
	return 0;
}