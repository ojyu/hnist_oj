#include<stdio.h>
int main()
{
	int i, j;
	char ch;
	scanf("%c", &ch);
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%c", ch);
		printf("\n");
	}

	return 0;
}