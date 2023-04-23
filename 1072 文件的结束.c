#include<stdio.h>
#include<string.h>
int main()
{
	char text[100];
	int i = 0;
	scanf("%s", text);
	if (strlen(text) > 1)
	{
		for (i = 0; i < strlen(text) - 2; i++)
			printf("%d\n", 0);
	}
	printf("%d\n", 19);
	return 0;
}